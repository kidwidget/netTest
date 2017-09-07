#include <stdio.h>
#include <stdlib.h>

#define TESTPERMINUT 3
#define MINUTESTORUN 240
#define NUMBEROFTEST TESTPERMINUT*MINUTESTORUN


int main(){
	int x = 1;
	int i = 0;
	for(i = 0; i < NUMBEROFTEST; i++){
		while(x){
			x = system("iperf -c 10.226.90.214 -w 65535 -r > Results.Iperf.txt");
		}
		x = 1;
		printf("%d,", i);
		fflush(stdout);
		system("./getGPS.awk /dev/serial0");
		system("./getIperf.awk Results.Iperf.txt");
		
		while(x){
			x = system("ping 10.226.90.214 -c1 > pingresults.txt");
		}
		x = 1;
		fflush(stdout);
		system("./getGPS.awk /dev/serial0");
		system("./getPing.awk pingresults.txt");
	}
}

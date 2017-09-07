#include <stdio.h>
#include <stdlib.h>

#define TESTPERMINUT 3
#define MINUTESTORUN 60
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
		printf("\n");
	}
}

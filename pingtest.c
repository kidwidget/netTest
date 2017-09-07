#include <stdio.h>
#include <stdlib.h>

#define TESTPERMINUT 165
#define MINUTESTORUN 60
#define NUMBEROFTEST TESTPERMINUT*MINUTESTORUN

int main(){
	int x = 1;
	int i = 0;
	for(i=1;i<NUMBEROFTEST;i++){
		while(x){
			x = system("ping 10.226.90.214 -c1 > pingResults.txt");
		}
		x = 1;
		printf("%d,", i);
		fflush(stdout);
		system("./getGPS.awk /dev/serial0");
		system("./getPing.awk pingResults.txt");
	}
	return 0;
}


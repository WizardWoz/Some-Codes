#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void Temperatures(double hua);
int main(void){
	int rv;
	double hua;
	printf("Please enter the hua:");
	rv=scanf("%lf",&hua);
	while(rv==1){
		Temperatures(hua);
		printf("Next input:\n");
		rv=scanf("%lf",&hua);
	}
	return 0;
}

void Temperatures(double hua){
	const double she=5.0/9.0*(hua-32.0);
	const double kai=she+273.16;
	printf("Hua:%.2lf She:%.2lf Kai:%.2lf\n",hua,she,kai);
}

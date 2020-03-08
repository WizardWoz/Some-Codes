#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int i=0;
	float sum1=100.0;
	float sum2=100.0;
	do{
		sum1+=10;
		sum2+=sum2*0.05;
		++i;
	}while(sum1>sum2);
	printf("%d",i);
	return 0;
}


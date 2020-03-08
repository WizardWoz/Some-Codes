#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	float dowsp,filar;
	printf("Please enter the download speed&file large:\n");
	scanf("%f %f",&dowsp,&filar);
	printf("At %.2f megabits per second,a file of %.2f megabytes\n",dowsp,filar);
	printf("downloads in %.2f seconds",filar/(dowsp/8));
	return 0;
}


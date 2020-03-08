#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	float inc;
	printf("Please enter your height:");
	scanf("%f",&inc);
	printf("Your height in centimeter:%f",inc*2.54);
	return 0;
}


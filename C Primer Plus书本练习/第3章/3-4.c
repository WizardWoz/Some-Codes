#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	float num;
	printf("Enter a floating-point value:");
	scanf("%f",&num);
	printf("fixed-point notation:%f\n",num);
	printf("exponential notation:%e\n",num);
	printf("p notation:%a",num);
	return 0;
}


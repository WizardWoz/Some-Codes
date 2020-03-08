#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	float quat;
	printf("Please enter the quats of water:");
	scanf("%f",&quat);
	printf("The sum of H2O is:%lf",quat*950/3.0e-23);
	return 0;
}


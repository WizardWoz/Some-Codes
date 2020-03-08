#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void fun(double n);
int main(void){
	double num1;
	printf("Please enter a number:");
	scanf("%lf",&num1);
	fun(num1);
	return 0;
}

void fun(double n){
	printf("The cube of the number is:%lf",n*n*n);
}


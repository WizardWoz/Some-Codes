#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
double average(double x,double y);
int main(void){
	double x,y;
	printf("Enter two double numbers:");
	scanf("%lf %lf",&x,&y);
	printf("The average of x&y is:%lf",average(x,y));
	return 0;
}

double average(double x,double y){
	double ave;
	x=1/x;
	y=1/y;
	ave=1/((x+y)/2);
	return ave;
}

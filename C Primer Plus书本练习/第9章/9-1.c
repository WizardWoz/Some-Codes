#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
double get_min(double,double);
int main(void){
	double x,y;
	printf("Enter two double numbers:");
	scanf("%lf %lf",&x,&y);
	printf("The max number is:%lf",get_min(x,y));
	return 0;
}

double get_min(double x,double y){
	if(x<=y)
		return x;
	else
		return y; 
}

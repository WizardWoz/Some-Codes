#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
void larger_of(double *x,double *y);
int main(void){
	double x,y,*px,*py;
	px=&x;
	py=&y;
	printf("Enter two double numbers:");
	scanf("%lf %lf",&x,&y);
	larger_of(px,py);
	printf("Now x:%lf\t y:%lf",x,y);
	return 0;
}

void larger_of(double *x,double *y){
	if(*x>=*y)
		*y=*x;		
	else
		*x=*y;	
}

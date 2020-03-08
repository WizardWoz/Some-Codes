#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
void fun(double *x,double *y,double *z);
int main(void){
	double x,y,z,*px,*py,*pz;
	px=&x,py=&y,pz=&z;
	printf("Enter three double numbers:");
	scanf("%lf %lf %lf",&x,&y,&z);
	fun(px,py,pz);
	printf("%lf <= %lf <= %lf",x,y,z);
	return 0;
}

void fun(double *x,double *y,double *z){
	double temp;
	if(*x>=*y){
		temp=*y;
		*y=*x;
		*x=temp;
	}
	if(*x>=*z){
		temp=*z;
		*z=*x;
		*x=temp;
	}
	if(*y>=*z){
		temp=*z;
		*z=*y;
		*y=temp;
	}
}

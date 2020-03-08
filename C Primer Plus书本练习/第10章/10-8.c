#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
void copy_arr(double tar1[],const double src[],int n);
int main(void){
	double source[7]={1,2,3,4,5,6,7};
	double target[3];
	copy_arr(target,source,3);
	return 0;
}

void copy_arr(double tar1[],const double src[],int n){
	int i;
	for(i=2;i<2+n;i++)
		tar1[i-2]=src[i];
	printf("Copy_Arr:");
	for(i=0;i<n;i++)
		printf("%.1lf ",tar1[i]);
	printf("\n");
}

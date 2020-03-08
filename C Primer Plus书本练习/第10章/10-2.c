#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
void copy_arr(double tar1[],const double src[],int n);
void copy_ptr(double *tar2,const double *src,int n);
void copy_ptrs(double *tar3,const double *src,double *n);
int main(void){
	double source[5]={1.1,2.2,3.3,4.4,5.5};
	double target1[5],target2[5],target3[5];
	copy_arr(target1,source,5);
	copy_ptr(target2,source,5);
	copy_ptrs(target3,source,source+5);
	return 0;
}

void copy_arr(double tar1[],const double src[],int n){
	int i;
	for(i=0;i<n;i++)
		tar1[i]=src[i];
	printf("Copy_Arr:");
	for(i=0;i<n;i++)
		printf("%.1lf ",tar1[i]);
	printf("\n");
}

void copy_ptr(double *tar2,const double *src,int n){
	int i;
	for(i=0;i<n;i++){
		*tar2=*src;
		tar2++;
		src++;
	}
	tar2-=n;
	printf("Copy_Ptr:");
	for(i=0;i<n;i++){
		printf("%.1lf ",*tar2);
		tar2++;
	}
	printf("\n");
}

void copy_ptrs(double *tar3,const double *src,double *n){
	int i,m=0;
	for(;src<n;src++,tar3++,m++)
		*tar3=*src;
	printf("Copy_Ptrs:");
	for(tar3-=m,i=0;i<m;i++){
		printf("%.1lf ",*tar3);
		tar3++;		
	}
}

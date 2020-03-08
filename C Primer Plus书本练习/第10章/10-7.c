#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
#define N 3
#define M 4
void copy_ptr(double *,const double *,int n);
int main(void){
	int i,j;
	double source[N][M]={{1.1,1.2,1.3,1.4},{2.1,2.2},{3.1,3.2,3.3,3.4}};
	double target[N][M];
	for(i=0;i<N;i++)
		copy_ptr(target+i,source+i,M);
	printf("Now copy has done:\n");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++)
			printf("%.1lf ",*(*(target+i)+j));
		printf("\n");
	}
	return 0;
}

void copy_ptr(double *tar,const double *src,int n){
	int i;
	for(i=0;i<n;i++)
		*(tar+i)=*(src+i);
}

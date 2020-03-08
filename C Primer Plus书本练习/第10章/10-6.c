#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
void rev(double *,int);
int main(void){
	int i,n;
	printf("Enter the length of the double array:");
	scanf("%d",&n);
	double arr[n];
	printf("Enter the num of the array:\n");
	for(i=0;i<n;i++)
		scanf("%lf",&arr[i]);
	rev(arr,n);
	return 0;
}

void rev(double *arr,int n){
	int i;
	double temp;
	for(i=0;i<=n/2;i++){
		temp=*(arr+i);
		*(arr+i)=*(arr+(n-i-1));
		*(arr+(n-i-1))=temp;
	}
	printf("After reverse:\n");
	for(i=0;i<n;i++)
		printf("%4.2lf",*(arr+i));
}


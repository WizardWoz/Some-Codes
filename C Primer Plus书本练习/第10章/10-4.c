#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
int get_imax(double arr[],int n);
int main(void){
	int i,n;
	printf("Enter the length of double array:");
	scanf("%d",&n);
	double arr[n];
	printf("Enter the total numbers:\n");
	for(i=0;i<n;i++)
		scanf("%lf",arr+i);
	printf("The i to max num is:%d",get_imax(arr,n));
	return 0;
}

int get_imax(double arr[],int n){
	int i,record=0;
	double max=*arr;
	for(i=1;i<n;i++){
		if(max<=*(arr+i)){
			max=*(arr+i);
			record=i;			
		}
	}
	return record;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
int get_max(int *arr,int n);
int main(void){
	int i,n;
	printf("Enter the length of integer array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the total numbers:\n");
	for(i=0;i<n;i++)
		scanf("%d",arr+i);
	printf("The max num of the array is:%d",get_max(arr,n));
	return 0;
}

int get_max(int *arr,int n){
	int i,max=*arr;
	for(i=1;i<n;i++){
		if(max<=*(arr+i))
			max=*(arr+i);	
	}
	return max;
}

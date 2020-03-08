#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
void addup(int arr1[],int arr2[],int arr3[],int n);
int main(void){
	int i,n;
	printf("Enter the length of integer array:");
	scanf("%d",&n);
	int arr1[n],arr2[n],arr3[n];
	printf("Enter the each value of arr1:\n");
	for(i=0;i<n;i++)
		scanf("%d",arr1+i);
	printf("Enter the each value of arr2:\n");
	for(i=0;i<n;i++)
		scanf("%d",arr2+i);
	addup(arr1,arr2,arr3,n);
	printf("Now the each value of arr3:\n");
	for(i=0;i<n;i++)
		printf("%d ",*(arr3+i));
	return 0;
}

void addup(int arr1[],int arr2[],int arr3[],int n){
	int i;
	for(i=0;i<n;i++)
		*(arr3+i)=*(arr1+i)+*(arr2+i);
}

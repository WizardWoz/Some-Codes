#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
double get_sub(int n,double arr[n]);
int main(void){
	int i,n;
	printf("Enter the length of the double array:");
	scanf("%d",&n);
	double arr[n];
	printf("Enter the num of the array:\n");
	for(i=0;i<n;i++)
		scanf("%lf",&arr[i]);
	printf("The sub between the max&min num is:%lf",get_sub(n,arr)); 
	return 0;
}

double get_sub(int n,double arr[n]){
	int i;
	double max=*arr,min=*arr;
	for(i=1;i<n;i++){
		if(max<=*(arr+i))
			max=*(arr+i);
		if(min>=*(arr+i))
			min=*(arr+i);
	}
	return max-min;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	double arr1[8],arr2[8];
	int i;
	printf("Please enter the num of arr1:\n");
	for(i=0;i<8;i++)
		scanf("%lf",&arr1[i]);
	arr2[0]=arr1[0];
	for(i=1;i<8;i++)
		arr2[i]=arr2[i-1]+arr1[i];
	for(i=0;i<8;i++)
		printf("%lf ",arr2[i]);	
	return 0;
}


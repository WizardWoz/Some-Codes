#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int i;
	int arr[8];
	printf("Please enter 8 integer nums:\n");
	for(i=0;i<8;i++)
		scanf("%d",&arr[i]);
	for(i=7;i>=0;i--)
		printf("%d ",arr[i]);
	return 0;
}


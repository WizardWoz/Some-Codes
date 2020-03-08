#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
int *twoSum(int *,int,int,int *);
int main(void){
	int numsize=4,target=9,i;
	int arr[4]={15,2,11,7},arr1[2];
	twoSum(arr,numsize,target,arr1);
	printf("%d %d",arr1[0],arr1[1]);
	return 0;
}

int *twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,j;
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if(*(nums+i)+*(nums+j)==target){
                *returnSize=i;
                *(returnSize+1)=j;
            }
        }
    }
    return returnSize;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
int arr1[11];
int main(void){
	int i=0,arr[1000];
	while(i++<=9){
		int j;
		srand((unsigned int)time(0));		//提供种子seed 
		printf("The %d running time:\n",i);
		for(j=0;j<1000;j++){
			arr[j]=rand()%10+1;				//利用种子，计算随机数 
		}
		for(j=0;j<1000;j++){
			int k;
			for(k=1;k<=10;k++){
				if(arr[j]==k)
					arr1[k]++;
			}
		}
		for(j=1;j<=10;j++){
			printf("The %d num appear %d times:\n",j,arr1[j]);
			arr1[j]=0;
		}
		printf("\n");
	}
	return 0;
}





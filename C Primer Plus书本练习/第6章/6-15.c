#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int i=0,k;
	char arr[255];
	scanf("%c",&arr[i]);
	while(arr[i]!='\n'){
		i++;
		scanf("%c",&arr[i]);
	}
	for(k=i-1;k>=0;k--)
		printf("%c",arr[k]);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	const int NUM=26;
	int i;
	char arr[NUM];
	for(i=0;i<NUM;i++)
		arr[i]='a'+i;
	for(i=0;i<NUM;i++)
		printf("%c ",arr[i]);
	return 0;
}


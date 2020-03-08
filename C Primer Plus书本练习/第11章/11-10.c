#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
char *delete_space(char *);
int main(void){
	char arr[100];
	while(1){
		printf("Enter the string:\n");
		gets(arr);			//会把'\n'也读入 
		printf("After calling delete_space:\n");
		puts(delete_space(arr));
	}
	return 0;
}

char *delete_space(char *arr){
	int i,j=0;
	char arr1[100];
	for(i=0;i<strlen(arr);i++){
		if(arr[i]!=' '&&arr[i]!='\t'){
			arr1[j]=arr[i];
			j++;
		}
	}
	arr1[j]='\0';
	return arr1;
}

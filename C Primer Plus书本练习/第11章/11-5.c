#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
char *first_app(char *,char);
int main(void){
	int i=0;
	char arr[100],ch;
	printf("Enter the char you want:");
	ch=getchar();
	printf("Enter a string(chars<=length):\n");
	while((arr[i]=getchar())!=EOF)
		i++;
	if(first_app(arr,ch))
		printf("The char first apperance is:%p",first_app(arr,ch));
	else
		printf("Not exist!");
	return 0;
}

char *first_app(char *arr,char ch){
	while(*arr!='\0'&&*arr!=ch){
		if(*arr==ch){
			return arr;
			break;
		}
		else
			arr++;
	}
	if(*arr=='\0')
		return NULL;
}

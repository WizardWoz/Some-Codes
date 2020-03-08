#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
int is_within(char,char *);
int main(void){
	int i=0;
	char arr[100],ch;
	printf("Enter the char you want:");
	ch=getchar();
	printf("Enter a string(chars<=length):\n");
	while((arr[i]=getchar())!=EOF)
		i++;
	if(is_within(ch,arr))
		printf("The char is in the string!");
	else
		printf("Not exist!");
	return 0;
}

int is_within(char ch,char *arr){
	while(*arr!='\0'&&*arr!=ch){
		if(*arr==ch){
			return 1;
			break;
		}
		else
			arr++;
	}
	if(*arr=='\0')
		return 0;
}


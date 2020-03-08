#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
char *reverse(char *);
int main(void){
	int i=0;
	char arr[100];
	while(1){
		printf("Enter the string:\n");
		while((arr[i]=getchar())!=EOF)
			i++;
		printf("After calling reverse:\n");
		fputs(reverse(arr),stdout);
		putchar('\n');
	}
	return 0;
}

char *reverse(char *arr){
	int i,length;
	char temp;
	length=strlen(arr)-1;
	for(i=0;i<=length/2;i++){
		temp=*(arr+i);
		*(arr+i)=*(arr+length-i);
		*(arr+length-i)=temp;
	}
	return arr;
}

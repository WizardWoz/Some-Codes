#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
int fun(char ch);
int main(void){
	char ch;
	while((ch=getchar())!=EOF){
		if(fun(ch)!=-1){
			putchar(ch);
			printf(" is a character,it is the No.%d character in the table.\n",fun(ch));
		}
		else{
			putchar(ch);
			printf(" is not a character.\n");
		}	
	}
	return 0;
}

int fun(char ch){
	if(isalpha(ch)){
		if(ch>='A'&&ch<='Z')
			return ch-'A'+1;
		if(ch>='a'&&ch<='z')
			return ch-'a'+1;
	}
	else
		return -1;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
char get_first(char ch);
int main(void){
	char ch;
	printf("Please enter some chars,I can recognize the first char,");
	printf("not space:\n");
	printf("The first char is:%c",get_first(ch));
	return 0;
}

char get_first(char ch){
	ch=getchar();
	while(isspace(ch))
		ch=getchar();
	return ch;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int cnt=0;
	char ch;
	printf("Please enter the char(enter # to quit):");
	while((ch=getchar())!='#'){
		switch(ch){
			case '.':putchar('!');
					 ++cnt;
					 break;
			case '!':printf("!!");
					 ++cnt;
					 break;
			default: putchar(ch);
					 break;
		}
	}
	printf("\nTotal change:%d",cnt);
	return 0;
}


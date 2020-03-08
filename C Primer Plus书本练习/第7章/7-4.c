#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int cnt=0;
	char ch;
	printf("Please enter the char(enter # to quit):");
	while((ch=getchar())!='#'){
		if(ch=='.'){
			putchar('!');
			++cnt;	
		}
		else if(ch=='!'){
			printf("!!");
			++cnt;	
		}
		else
			putchar(ch);
	}
	printf("\nTotal change:%d",cnt);
	return 0;
}


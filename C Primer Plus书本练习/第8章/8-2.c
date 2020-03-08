#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	char ch;
	int cnt=0;
	while((ch=getchar())!=EOF){
		if(ch<' '){
			if(ch=='\n'||ch=='\t')
				putchar(ch);
			else
				printf("^%c",ch+64);
		}
		else
			putchar(ch);
		++cnt;
		if(cnt%10==0)
			printf("\n");
	}
	return 0;
}


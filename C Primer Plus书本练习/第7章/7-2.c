#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int count=0;
	char ch;
	while((ch=getchar())!='#'){
		++count;
		printf("%c:%d ",ch,ch);
		if(count%8==0)
			putchar('\n');
	}
	return 0;
}


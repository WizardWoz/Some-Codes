#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int row,line,bl;
	char ch;
	scanf("%c",&ch);
	for(row=0;row<=ch-'A';row++){
		for(bl=(ch-'A'-row-1);bl>=0;bl--)
			printf(" ");
		for(line='A';line<='A'+row;line++)
			printf("%c",line);
		for(line='A'+row-1;line>='A';line--)
			printf("%c",line);
		printf("\n");
	}
	return 0;
}


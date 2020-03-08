#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
void chline(char ch,int j,int i);
int main(void){
	char ch;
	int i,j;
	printf("Enter the char you want to print,the rows&the cols:\n");
	scanf("%c %d %d",&ch,&j,&i);
	chline(ch,j,i);
	return 0;
}

void chline(char ch,int j,int i){
	int n,m;
	for(n=1;n<=j;n++){
		for(m=1;m<=i;m++)
			putchar(ch);
		putchar('\n');
	}
}

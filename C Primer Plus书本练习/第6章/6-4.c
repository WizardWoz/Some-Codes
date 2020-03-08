#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int i,j;
	char ch='A';
	for(i=1;i<=6;i++){
		for(j=1;j<=i;j++){
			printf("%c",ch);
			++ch;
		}
		printf("\n");
	}
	return 0;
}


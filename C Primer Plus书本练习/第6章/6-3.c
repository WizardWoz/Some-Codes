#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int i,j;
	for(i=1;i<=6;i++){
		for(j=0;j<i;j++)
			printf("%c",'F'-j);
		printf("\n");
	}
	return 0;
}


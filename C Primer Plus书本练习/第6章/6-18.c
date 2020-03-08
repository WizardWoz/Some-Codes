#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int sum=5,i=1;
	while(sum<=150){
		sum=(sum-i)*2;
		printf("%d week:%d friends.\n",i,sum);
		++i;
	}
	return 0;
}


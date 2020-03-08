#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int i=0;
	float sum=1000000;
	while(sum>=0){
		sum+=sum*0.08;
		sum-=100000;
		++i;
	}
	printf("%d",i);
	return 0;
}


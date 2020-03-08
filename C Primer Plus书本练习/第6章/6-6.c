#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int max,min,i;
	printf("Please enter the max&min num:");
	scanf("%d %d",&max,&min);
	printf("Num\tSquare\tCube\n");
	for(i=min;i<=max;i++)
		printf("%d\t%d\t%d\n",i,i*i,i*i*i);
	return 0;
}


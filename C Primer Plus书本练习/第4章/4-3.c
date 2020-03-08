#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	float num;
	printf("Please enter a pointing-num:");
	scanf("%f",&num);
	printf("The input is %.1f or %.1e\n",num,num);
	printf("The input is %+.3f or %.3E",num,num);
	return 0;
}


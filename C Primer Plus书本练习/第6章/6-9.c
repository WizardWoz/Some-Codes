#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
float fun(float num1,float num2);
int main(void){
	float num1,num2;
	int rv;
	printf("Please enter two pointing-nums:");
	rv=scanf("%f %f",&num1,&num2);
	while(rv==2){
		printf("The final answer:%f\n",fun(num1,num2));
		printf("Next enter:");
		rv=scanf("%f %f",&num1,&num2);
	}
	return 0;
}

float fun(float num1,float num2){
	return (num1-num2)/(num1*num2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void fun(void);

int main(void){
	fun(),fun(),fun();
	printf("\n");
	fun(),fun();
	printf("\n");
	fun();	
	return 0;
}

void fun(void){
	printf("Smile!");
}


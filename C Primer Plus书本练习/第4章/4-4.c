#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	float height;
	char name[20];
	printf("Please enter your height&name:\n");
	scanf("%f %s",&height,name);
	printf("%s,you are %.3f meters tall",name,height/100);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
void to_base_n(int n,int p);
int main(void){
	int number,p;
	printf("Enter an integer&the number base(q to quit):\n");
	while(scanf("%d %d",&number,&p)==2){
		printf("Number %d to the base %d is ",number,p);
		to_base_n(number,p);
		putchar('\n');
		printf("Enter an integer&the number base(q to quit):\n");
	}
	printf("Done!");
	return 0;
}

void to_base_n(int number,int p){
	int r;
	r=number%p;
	if(number>=p)
		to_base_n(number/p,p);
	printf("%d",r);
}

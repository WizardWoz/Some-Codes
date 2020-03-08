#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
int get_max(int x,int y,int z);
int main(void){
	int x,y,z;
	printf("Enter three integers:");
	scanf("%d %d %d",&x,&y,&z);
	printf("The max number is:%d",get_max(x,y,z));
	return 0;
}

int get_max(int x,int y,int z){
	int max;
	if(x>=y)
		max=x;
	else
		max=y;
	if(max<=z)
		return z;
	else
		return max;
}

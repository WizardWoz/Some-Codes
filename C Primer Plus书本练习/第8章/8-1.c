#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	char ch;
	int i=0;
	while((ch=getchar())!=EOF)
		++i;
	printf("Total num of chars:%d",i);
	return 0;
}


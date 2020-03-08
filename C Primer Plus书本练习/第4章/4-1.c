#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	char fname[10],sname[10];
	printf("Please enter your full name:");
	scanf("%s %s",sname,fname);
	printf("Second name,first name:%s,%s",sname,fname);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	char fname[20],sname[20];
	printf("Please enter your full name(second name&first name):");
	scanf("%s %s",sname,fname);
	printf("%s %s\n",sname,fname);
	printf("%*d %*d\n",strlen(sname),strlen(sname),strlen(fname),strlen(fname));
	printf("%s %s\n",sname,fname);
	printf("%-*d %-*d\n",strlen(sname),strlen(sname),strlen(fname),strlen(fname));	
	return 0;
}


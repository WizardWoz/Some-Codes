#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
int main(void){
	FILE *fp;
	char ch;
	if((fp=fopen("E:\\test.txt","w"))==NULL){
		printf("Can not open file!");
		exit(0);
	}
	while((ch=getchar())!='\n')
		fputc(ch,fp);
	fclose(fp);
	return 0;
}


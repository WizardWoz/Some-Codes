/*例9.2 显示文本文件内容*/ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
int main(int argc,char *argv[]){
	char ch;
	FILE *fp;
	int i;
	if((fp=fopen("text1.txt","r"))==NULL){
		printf("not open.");
		exit(0);
	}
	//从文件读取一个字符，显示到屏幕
	while(!feof(fp)){
		ch=fgetc(fp);
		putchar(ch);
	}
	fclose(fp);
	return 0;
}


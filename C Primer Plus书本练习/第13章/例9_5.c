#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
int main(void){
	FILE *fp1,*fp2;
	char str[128];
	//以只读方式打开文件1
	if((fp1=fopen("text1.txt","r"))==NULL){
		printf("cannot open file\n");
		exit(0);
	}
	//以只写方式打开文件2
	if((fp2=fopen("text2.txt","w"))==NULL){
		printf("cannot open file\n");
		exit(0);
	}
	//从文件中读回的字符串长度>0
	while(fgets(str,128,fp1)>0){
		fputs(str,fp2);
		printf("%s",str);
	} 
	fclose(fp1);
	fclose(fp2);
	return 0;
}


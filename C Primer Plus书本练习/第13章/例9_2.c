/*��9.2 ��ʾ�ı��ļ�����*/ 
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
	//���ļ���ȡһ���ַ�����ʾ����Ļ
	while(!feof(fp)){
		ch=fgetc(fp);
		putchar(ch);
	}
	fclose(fp);
	return 0;
}


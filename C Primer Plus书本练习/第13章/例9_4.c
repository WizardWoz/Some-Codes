#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
int main(void){
	FILE *fp;
	char str[128];
	if((fp=fopen("test.txt","w"))==NULL){	//��ע���ļ��ľ���λ�ã��ļ��ᴴ���������� 
		printf("cannot open file!");
		exit(0);
	}
	while(scanf("%s",str)!=EOF){		//���ܶ���ո� 
		fputs(str,fp);
	}
	fclose(fp);
	return 0;
}


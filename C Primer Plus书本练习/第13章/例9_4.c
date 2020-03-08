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
	if((fp=fopen("test.txt","w"))==NULL){	//不注明文件的具体位置，文件会创建在桌面上 
		printf("cannot open file!");
		exit(0);
	}
	while(scanf("%s",str)!=EOF){		//不能读入空格 
		fputs(str,fp);
	}
	fclose(fp);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
int main(int argc,char *argv[]){
	FILE *fp;
	if(argc!=3){		//如果命令行中的命令不为三行 
		printf("Usage:SEEK filename byte.\n");
		exit(0);
	}
	if((fp=fopen(argv[1],"rb"))==NULL){
		printf("Cannot open file.\n");
		exit(0);
	}
	if(fseek(fp,atol(argv[2]),SEEK_SET)){
		printf("Seek error.\n");
		exit(0);
	}
	printf("Byte at %ld is %c.\n",atol(argv[2]),getc(fp));
	fclose(fp);
	return 0;
}


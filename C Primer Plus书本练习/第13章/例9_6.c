#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
struct stu{
	char name[15];
	char num[6];
	float score[2];
}student;

int main(void){
	FILE *fp;
	int i;
	//以文本只写方式打开text.txt 
	if((fp=fopen("test.txt","w"))==NULL){
		printf("cannot open file");
		exit(0);
	}
	printf("input data:\n");
	for(i=0;i<2;i++){
		scanf("%s %s %f %f",student.name,student.num,
							&student.score[0],&student.score[1]);
		fprintf(fp,"%s %s %7.2f %7.2f\n",student.name,student.num,
							student.score[0],student.score[1]);
	}
	fclose(fp);
	//以文本只读方式打开text.txt 
	if((fp=fopen("test.txt","r"))==NULL){
		printf("cannot open file");
		exit(0);
	}
	printf("output from file:\n");
	while(fscanf(fp,"%s %s %f %f",student.name,student.num,
							&student.score[0],&student.score[1])!=EOF)
		printf("%s %s %7.2f %7.2f\n",student.name,student.num,
							student.score[0],student.score[1]);
	fclose(fp);
	return 0;
}


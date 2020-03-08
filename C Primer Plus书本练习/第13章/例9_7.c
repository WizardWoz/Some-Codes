#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#define N 30
struct student{
	char name[8];
	int num;
	int age;
	float score;
}stud[N];

void save(void);
void open(void);

int main(void){
	int i;
	for(i=0;i<N;i++)
		scanf("%s %d %d %f",stud[i].name,&stud[i].num,
							&stud[i].age,&stud[i].score);
	save();
	printf("Press any key to show data from file.\n");
	getchar();			//吸收最后一次输入后按下的回车符 
	open();
	return 0;
}

void save(void){
	FILE *fp;
	int i;
	if((fp=fopen("score.dat","wb"))==NULL){
		printf("cannot open file\n");
		exit(0);		//也可以用return;
	}
	for(i=0;i<N;i++){
		if(fwrite(&stud[i],sizeof(struct student),1,fp)!=1)
			printf("file write error.\n");
	}
	fclose(fp);
}

void open(void){
	FILE *fp;
	int i;
	if((fp=fopen("score.dat","rb"))==NULL){
		printf("cannot open file\n");
		exit(0);		//也可以用return;
	}
	for(i=0;i<N;i++){
		if(fread(&stud[i],sizeof(struct student),1,fp)==1)
			printf("%-10s %8d %6d %12.2f\n",stud[i].name,stud[i].num,
											stud[i].age,stud[i].score);
		else{
			printf("file read error\n");
			break;
		}
	}
	fclose(fp);
}

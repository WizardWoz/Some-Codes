#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#define CSIZE 4
struct fullname{
	char fname[20];
	char lname[20];
};

struct student{
	struct fullname name;
	float grade[3];
	float average;
};

void cal_ave(struct student *);
void print_info(struct student *);
void print_totave(struct student *);
int main(void){
	int i,j;
	struct student s1[CSIZE];
	for(i=0;i<CSIZE;i++){
		printf("Please enter the first&last name:\n");
		scanf("%s %s",s1[i].name.fname,s1[i].name.lname);
		printf("Please enter the grades of three courses:\n");
		for(j=0;j<3;j++)
			scanf("%f",&s1[i].grade[j]);
	}
	cal_ave(s1);
	print_info(s1);
	print_totave(s1);
	return 0;
}

void cal_ave(struct student *s1){
	int i,j;
	float sum;
	for(i=0;i<CSIZE;i++){
		sum=0;
		for(j=0;j<3;j++)
			sum+=(s1+i)->grade[j];
		(s1+i)->average=sum/3;
	}
}

void print_info(struct student *s1){
	int i,j;
	for(i=0;i<CSIZE;i++){
		printf("\nName:%s %s",(s1+i)->name.fname,(s1+i)->name.lname);
		printf("\nScores:");
		for(j=0;j<3;j++)
			printf("%.2f ",(s1+i)->grade[j]);
		printf("Average:%.2f",(s1+i)->average);
	}
}

void print_totave(struct student *s1){
	int i;
	float total;
	for(i=0;i<CSIZE;i++)
		total+=(s1+i)->average;
	printf("\nTotal average grades:%.2f",total/CSIZE);
}

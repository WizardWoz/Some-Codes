#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	char name[20];
	printf("Please enter your second name:");
	scanf("%s",name);
	printf("\"%s\"\n",name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	printf("%*s",strlen(name)+3,name);		//�����ֿ�ȶ�3 
	return 0;
}


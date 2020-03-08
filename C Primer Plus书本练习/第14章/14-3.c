#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100			//�鼮��������� 
char *s_gets(char *st,int n);

struct book{				//����bookģ�� 
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void){
	struct book library[MAXBKS],temp;
	int count=0;
	int index,i,j;
	
	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while(count<MAXBKS&&s_gets(library[count].title,MAXTITL)!=NULL
		&&library[count].title[0]!='\0'){
		printf("Now enter the author.\n");
		s_gets(library[count].author,MAXAUTL);
		printf("Now enter the value.\n");
		scanf("%f",&library[count++].value);		//count����һ��������� 
		while(getchar()!='\n')
			continue;
		if(count<MAXBKS)
			printf("Enter the next title.\n");
	}
	if(count>0){
		//��ԭ˳�����ͼ�����Ϣ 
		printf("First print(Order:Original):\n");
		for(index=0;index<count;index++)
			printf("%s by %s:$%.2f\n",library[index].title,
			library[index].author,library[index].value);
		//��������ĸASCIIֵ˳�����ͼ����Ϣ
		printf("\nSecond print(Order:Title's ASCII):\n");
		for(i=0;i<count-1;i++){
			for(j=i+1;j<count;j++){
				if(strcmp(library[i].title,library[j].title)>0){
					temp=library[i];
					library[i]=library[j];
					library[j]=temp;
				}
			}
		} 
		for(index=0;index<count;index++)
			printf("%s by %s:$%.2f\n",library[index].title,
			library[index].author,library[index].value);
		printf("\nThird print(Order:value):\n");
		for(i=0;i<count-1;i++){
			for(j=i+1;j<count;j++){
				if(library[i].value>=library[j].value){
					temp=library[i];
					library[i]=library[j];
					library[j]=temp;
				}
			}
		}
		for(index=0;index<count;index++)
			printf("%s by %s:$%.2f\n",library[index].title,
			library[index].author,library[index].value); 
	}
	else
		printf("No books?Too bad.\n");
	return 0;
}

char *s_gets(char *st,int n){
	char *ret_val;
	char *find;
	
	ret_val=fgets(st,n,stdin);
	if(ret_val){
		find=strchr(st,'\n');
		if(find)
			*find='\0';
		else
			while(getchar()!='\n')
				continue;
	}
	return ret_val;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
void src_print(int,char (*arr)[100]);
void ascii_print(int,char (*arr)[100]);
void len_print(int,char arr[][100]);
void first_print(int,char arr[][100]);
int main(void){
	int i;
	char ch;
	char arr[10][100];
	printf("Enter the strings:\n");
	for(i=0;i<10;i++){
		gets(arr[i]);
		if(arr[i][0]=='\0')
			break;
	}
	printf("Enter 1,2,3,4 to choose function,or q to quit:\n");
	while((ch=getchar())!='q'){
		if(ch!='1'&&ch!='2'&&ch!='3'&&ch!='4'){
			printf("Please don't enter other chars except 1,2,3,4 or q.\n");
			continue;
		}
		switch(ch){
			case '1':src_print(i,arr);break;
			case '2':ascii_print(i,arr);break;
			case '3':len_print(i,arr);break;
			case '4':first_print(i,arr);break;
		}	
	}
	return 0;
}

void src_print(int n,char arr[][100]){
	int i;
	for(i=0;i<n;i++){
		fputs(arr[i],stdout);
		putchar('\n');
	}
}

void ascii_print(int n,char arr[][100]){		//以ASCII值从小到大打印每一行 
	int i,j;
	char *temp;
	char *arr_ascii[n];
	for(i=0;i<n;i++)
		arr_ascii[i]=arr[i];
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(arr_ascii[i],arr_ascii[j])>=0){
				temp=arr_ascii[i];
				arr_ascii[i]=arr_ascii[j];
				arr_ascii[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		fputs(arr_ascii[i],stdout);
		putchar('\n');
	}
}

void len_print(int n,char arr[][100]){
	int i,j;
	char *temp,*arr_len[n];
	for(i=0;i<n;i++)
		arr_len[i]=arr[i];
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strlen(arr_len[i])>=strlen(arr_len[j])){
				temp=arr_len[i];
				arr_len[i]=arr_len[j];
				arr_len[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		fputs(arr_len[i],stdout);
		putchar('\n');
	}
}

void first_print(int n,char arr[][100]){
	int i,j,k,wordcount1,wordcount2;
	char *arr_first[n],*temp;
	for(i=0;i<n;i++)
		arr_first[i]=arr[i];
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			wordcount1=0;
			wordcount2=0;
			for(k=0;k<strlen(arr_first[i])-1;k++){	//逐个字符判断字符串1 
				if(isspace(arr_first[i][k])&&isalpha(arr_first[i+1][k+1])){
					while(isalpha(arr_first[i][++k]))
						wordcount1++;
				}
			}
			for(k=0;k<strlen(arr_first[j]);k++){	//逐个字符判断字符串2 
				if(isspace(arr_first[j][k])&&isalpha(arr_first[j][k+1])){
					while(isalpha(arr_first[j][++k]))
						wordcount2++;
				}
			}
			if(wordcount1>=wordcount2){
				temp=arr_first[i];
				arr_first[i]=arr_first[j];
				arr_first[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		fputs(arr_first[i],stdout);
		putchar('\n');
	}	
} 

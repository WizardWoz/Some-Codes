#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
char *mystrncpy(char *,char *,int);
int main(void){
	int i=0,n;
	char source[100],target[100];
	while(1){
		printf("Enter the num of chars you want to copy:");
		scanf("%d",&n);
		getchar();
		printf("Enter the source string:\n");
		fgets(source,100,stdin);
		printf("Enter the target string:\n");
		fgets(target,100,stdin);
		printf("After calling mystrncpy:%s\n",mystrncpy(target,source,n));
	}
	return 0;
}
                               
char *mystrncpy(char *tar,char *src,int n){
	int length,i=0;
	length=strlen(src);
	if(length<n){
		while(i<length){
			*(tar+i)=*(src+i);
			i++;
		}
		if(i=length-1){
			for(i=length;i<n;i++)
				*(tar+i)='\0';
		}
	}
	else{
		while(i<length){
			*(tar+i)=*(src+i);
			i++;
		}
	}
	return tar;
}


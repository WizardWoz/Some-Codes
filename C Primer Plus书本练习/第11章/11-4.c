#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
void get_word(char *,int);
int main(void){
	int n;
	printf("Enter the length of the sentence:");
	scanf("%d",&n);
	getchar();
	char word[20];
	printf("Enter a sentence(chars<=%d):\n",n);
	get_word(word,n);
	fputs(word,stdout);
	return 0;
}

void get_word(char *word,int n){
	int i;
	char arr[n],ch;
	fgets(arr,n,stdin);
	for(i=0;i<n;i++){
		if(*(arr+i)==' '||*(arr+i)=='\t')
			continue;
		else{
			*word++=*(arr+i);
			if(arr[i+1]==' '||arr[i+1]=='\t')
				break;
		}
	}	
}

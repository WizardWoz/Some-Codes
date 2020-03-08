#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
void get_word(char *);
int main(void){
	char word[20];
	printf("Enter a sentence:\n");
	get_word(word);
	fputs(word,stdout);
	return 0;
}

void get_word(char *word){
	int i;
	char arr[100],ch;
	fgets(arr,100,stdin);
	for(i=0;i<100;i++){
		if(*(arr+i)==' '||*(arr+i)=='\t')
			continue;
		else{
			*word++=*(arr+i);
			if(arr[i+1]==' '||arr[i+1]=='\t')
				break;
		}
	}	
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
char *string_in(char *,char *);
int main(void){
	char source[100],target[100];
	while(1){
		printf("Enter the source string:\n");
		fgets(source,100,stdin);			//会把'\n'也读入 
		printf("Enter the target string:\n");
		fgets(target,100,stdin);
		printf("After calling string_in:%p\n",string_in(target,source));
	}
	return 0;
}

char *string_in(char *tar,char *src){
	int i,j,record,count,countword=0,lengtht,lengths;
	lengtht=strlen(tar)-1;
	lengths=strlen(src)-1;
	for(i=0;i<lengtht;i++){
		count=0;			//count计算相同字母数 
		if(*(tar+i)==*src){
			count++;
			record=i+1;
			j=1;
			while(j<lengths){
				if(*(tar+record)==*(src+j))
					count++;
				record++;
				j++;
			}
		}
		if(count==lengths){
			countword++;
			return tar+i;
		}
	}
	if(countword==0)
		return NULL;
}

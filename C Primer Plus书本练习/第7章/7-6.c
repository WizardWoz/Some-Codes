#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int cnt=0;
	char ch1,ch2;
	printf("Please enter the char(enter # to quit):");
	while((ch1=getchar())!='#'){
		if(ch1=='e'){
			if((ch2=getchar())=='i')
				++cnt;
		}
	}
	printf("'ei' appears %d times",cnt);
	return 0;
}


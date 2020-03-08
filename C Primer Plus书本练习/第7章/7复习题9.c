#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	char ch;
	while((ch=getchar())!='#'){
		if(ch!='\n'){
			printf("Step 1\n");
			if(ch!='c'){
				if(ch=='b')
					break;
				else if(ch=='h')
					printf("Step 3\n");
				printf("Step 2\n");
			}
		}
	}
	printf("Done\n");
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int bn=0;
	int tn=0;
	int on=0;
	char ch;
	while((ch=getchar())!='#'){
		if(ch==' ')
			++bn;
		else if(ch=='\t')
			++tn;
		else
			++on;
	}
	printf("blankspace num:%d\t '\t' num:%d\t otherchar num:%d",bn,tn,on);
	return 0;
}


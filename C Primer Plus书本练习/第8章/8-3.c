#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	char ch;
	int cnt1=0,cnt2=0;
	while((ch=getchar())!=EOF){
		if(ch>='a'&&ch<='z')
			++cnt1;
		else if(ch>='A'&&ch<='Z')
			++cnt2;
	}
	printf("Total num of lower characters:%d\n",cnt1);
	printf("Total num of upper characters:%d",cnt2);
	return 0;
}


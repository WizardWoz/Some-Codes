#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int guess1=1,guess2=100,guess3;
	char responds;
	printf("Pick an integer from 1 to 100.I will try to guess ");
	printf("it.\nRespond with 'b' if my guess is bigger and 's'");
	printf(" if it is smaller.If correct print 'c''.\n");
	printf("Uh...is your number:%d?\n",(guess1+guess2)/2);
	while((responds=getchar())!='c'){
		if(responds=='\n')
			continue;
		guess3=(guess1+guess2)/2;
		if(responds=='b')
			guess2=guess3;
		else if(responds=='s')
			guess1=guess3;
		printf("Then...is it:%d?\n",(guess1+guess2)/2);
	}
	printf("Correct!I guess it!");
	return 0;
}


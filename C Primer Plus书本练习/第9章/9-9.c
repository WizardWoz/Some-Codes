#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
double power(double n,int p);
int main(void){
	double n;
	int p;
	printf("Enter a number and the power number");
	printf(" to which\nthe number will be raised.Enter q");
	printf(" to quit.\n");
	while(scanf("%lf %d",&n,&p)==2){
		printf("%lf to the power %d is %lf\n",n,p,power(n,p));
		printf("Enter the next pair or q to quit.\n");
	}
	printf("Bye!");
	return 0;
}

double power(double n,int p){
	if(n==0)
		return 0;
	else{
		if(p==0)
			return 1;
		else if(p>0)
			return n*power(n,p-1);
		else if(p<0)
			return n*power(n,p+1);
	}
}

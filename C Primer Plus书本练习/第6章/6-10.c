#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int upper,lower,i,sum;
	printf("Enter lower and upper integer limits:");
	scanf("%d %d",&lower,&upper);
	while(upper>lower){
		sum=0;
		for(i=lower;i<=upper;i++)
			sum+=i*i;
		printf("The sums of the squares from %d to %d is %d\n",lower*lower,upper*upper,sum);
		printf("Enter next set of limits:");
		scanf("%d %d",&lower,&upper);
	}
	printf("Done");
	return 0;
}


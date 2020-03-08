#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int num,i;
	float sum1,sum2;
	printf("Please enter the runtimes:");
	scanf("%d",&num);
	while(num>0){
		sum1=sum2=0;
		for(i=1;i<=num;i++)
			sum1+=1.0/(float)i;
		for(i=1;i<=num;i+=2)
			sum2+=1.0/(float)i;
		for(i=2;i<=num;i+=2)
			sum2-=1.0/(float)i;
		printf("Total is:%f\n",sum1+sum2);
		printf("Next enter:");
		scanf("%d",&num);
	}
	return 0;
}


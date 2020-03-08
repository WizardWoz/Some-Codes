#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int days,sum=0,n=1;
	printf("Please enter the days:");
	scanf("%d",&days);
	while(n<=days){
		sum=sum+n;
		++n;
	}
	printf("Total salary:$%d",sum);
	return 0;
}


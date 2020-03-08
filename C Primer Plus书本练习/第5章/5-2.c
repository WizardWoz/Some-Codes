#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int n1,n2;
	printf("Please enter an integer:");
	scanf("%d",&n1);
	n2=n1;
	while(n1<=n2+10){
		printf("%d ",n1);
		++n1;
	}
	return 0;
}


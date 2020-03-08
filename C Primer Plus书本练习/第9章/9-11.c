#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
void Fibonacci(int n);
int main(void){
	int n;
	printf("Enter the number of Fibonacci item you want to know,");
	printf("or enter q to quit.\n");
	while(scanf("%d",&n)==1){
		Fibonacci(n);
		printf("Enter the number of Fibonacci item you want to know,");
		printf("or enter q to quit.\n");
	}
	printf("Bye!");
	return 0;
}

void Fibonacci(int n){
	int i,arr[40];
	arr[0]=arr[1]=1;
	for(i=2;i<=n;i++)
		arr[i]=arr[i-1]+arr[i-2];
	printf("The item you want is:%d\n",arr[n-1]);
}

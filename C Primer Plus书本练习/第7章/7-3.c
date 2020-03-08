#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int num,sum1=0,sum2=0,cnt1=0,cnt2=0;
	printf("Please enter the num(enter 0 to quit):");
	scanf("%d",&num);
	while(num!=0){
		if(num%2==0){
			++cnt1;
			sum1+=num;
		}
		else{
			++cnt2;
			sum2+=num;
		}
		printf("Next enter:");
		scanf("%d",&num);
	}
	printf("The num of even:%d\tThe ave of even:%.2f\n",cnt1,(float)sum1/cnt1);
	printf("The num of odd:%d\tThe ave of odd:%.2f",cnt2,(float)sum2/cnt2);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int num,i,j,cnt;
	scanf("%d",&num);
	while(num>0){
		for(i=1;i<=num;i++){
			cnt=0;
			for(j=2;j*j<=i;j++){
				if(i%j==0)
					++cnt;	
			}
			if(cnt==0)
				printf("%d\t",i);	
		}
		printf("\nNext enter:");
		scanf("%d",&num);
	}
	return 0;
}


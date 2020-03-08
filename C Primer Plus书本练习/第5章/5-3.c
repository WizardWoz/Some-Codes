#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	int days1,days2,weeks;
	printf("Please enter the days:");
	scanf("%d",&days1);
	while(days1>0){
		weeks=days1/7;
		days2=days1%7;
		printf("%d days are %d weeks,%d days\n",days1,weeks,days2);
		printf("Next input:\n");
		scanf("%d",&days1);
	}
	return 0;
}


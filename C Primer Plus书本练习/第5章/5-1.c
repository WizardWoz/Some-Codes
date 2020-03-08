#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
	const int MIN_TO_HOU=60;
	int minute1,minute2,hour;
	printf("Please enter the minutes:");
	scanf("%d",&minute1);
	while(minute1>0){
		hour=minute1/MIN_TO_HOU;
		minute2=minute1-hour*MIN_TO_HOU;
		printf("%d minutes is %d hour,%d minutes.\n",minute1,hour,minute2);
		printf("Next input:\n");
		scanf("%d",&minute1);
	}
	return 0;
}


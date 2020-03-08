#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
struct month{
	char name[20];
	char simplename[3];
	int days;
	int num;
};
int totaldays(struct month *);
int main(void){
	struct month commondyear[12]={
		{"January","Jan",31,1},{"Febuary","Feb",28,2},{"March","Mar",31,3},
		{"April","Api",30,4},{"May","May",31,5},{"June","Jun",30,6},
		{"July","Jul",31,7},{"August","Aug",31,8},{"September","Sep",30,9},
		{"October","Oct",31,10},{"November","Nov",30,11},{"December","Dec",31,12}
	};
	printf("Total days:%d",totaldays(yearly));
	return 0;
}

int totaldays(struct month *yearly){
	int date,year;
	char name[12];
	printf("Enter the date,month,year:\n");
	scanf("%d %s %d",)
}

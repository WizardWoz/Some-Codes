#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define BASICSAL 10.00
#define EXTRAWORK 1.5
#define TAXRATE1 0.15
#define TAXRATE2 0.20
#define TAXRATE3 0.25
int main(void){
	float hours,totalsal,realsal,tax;
	printf("Please enter the total working hours:");
	scanf("%f",&hours);
	if(hours<=40){
		totalsal=BASICSAL*hours;
		if(totalsal<=300)
			tax=totalsal*TAXRATE1;
		else if(totalsal>300&&totalsal<=450)
			tax=300*TAXRATE1+(totalsal-300)*TAXRATE2;
		else
			tax=300*TAXRATE1+150*TAXRATE2+(totalsal-450)*TAXRATE3;
	}
	else{
		totalsal=EXTRAWORK*BASICSAL*hours;
		if(totalsal<=300)
			tax=totalsal*TAXRATE1;
		else if(totalsal>300&&totalsal<=450)
			tax=300*TAXRATE1+(totalsal-300)*TAXRATE2;
		else
			tax=300*TAXRATE1+150*TAXRATE2+(totalsal-450)*TAXRATE3;
	}
	printf("Total salary:$%.2f\t Total tax:$%.2f\t Salary left:$%.2f",totalsal,tax,totalsal-tax);
	return 0;
}


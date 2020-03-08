//pe12-2a.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
#include "pe12-2a.h"
void set_mode(int mode){
	if(mode!=0&&mode!=1){
		if(mode1==1){
			mode=mode1;
			printf("Invalid mode specified.Mode 1(US) used.\n");
		}
		else if(mode1==0){
			mode=mode1;
			printf("Invalid mode specified.Mode 0(Metric) used.\n");
		}
	}
	mode1=mode;
}

void get_info(void){
	if(mode1==1){
		printf("Enter distance traveled in miles:");
		scanf("%f",&distance);
		printf("Enter fuel consumed in gallons:");
		scanf("%f",&fuel);
	}
	else if(mode1==0){
		printf("Enter distance traveled in kilometers:");
		scanf("%f",&distance);
		printf("Enter fuel consumed in liters:");
		scanf("%f",&fuel);
	}
}

void show_info(void){
	if(mode1==1)
		printf("Fuel consumption is %.1f miles per gallon.\n",distance/fuel);
	else if(mode1==0)
		printf("Fuel consumption is %.2f liters per 100km.\n",fuel/(distance/100));
}

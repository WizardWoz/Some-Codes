//pe12-3a.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
#include "pe12-3a.h"
void set_mode(int mode,int mode1){
	if(mode!=0&&mode!=1){
		if(mode1==1)
			printf("Invalid mode specified.Mode 1(US) used.\n");
		else if(mode1==0)
			printf("Invalid mode specified.Mode 0(Metric) used.\n");
	}
}

float get_info(int mode){
	float distance,fuel;
	if(mode==1){
		printf("Enter distance traveled in miles:");
		scanf("%f",&distance);
		printf("Enter fuel consumed in gallons:");
		scanf("%f",&fuel);
		return distance/fuel;
	}
	else if(mode==0){
		printf("Enter distance traveled in kilometers:");
		scanf("%f",&distance);
		printf("Enter fuel consumed in liters:");
		scanf("%f",&fuel);
		return fuel/(distance/100);
	}
}

void show_info(int mode){
	if(mode==1)
		printf("Fuel consumption is %.1f miles per gallon.\n",get_info(mode));
	else if(mode==0)
		printf("Fuel consumption is %.2f liters per 100km.\n",get_info(mode));
}

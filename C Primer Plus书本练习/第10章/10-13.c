#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
void input_arr(double arr[][5]);
double ave_row(double *row);
double ave_all(double (*arr)[5]);
double get_max(double (*arr)[5]);
int main(void){
	int i;
	double arr[3][5];
	printf("Enter the 15 double numbers of the array:\n");
	input_arr(arr);
	for(i=0;i<3;i++)
		printf("The average of No.%d row is %.2lf\n",i,ave_row(arr+i));
	printf("The average of total element is %.2lf\n",ave_all(arr));
	printf("The max element is %.2lf",get_max(arr));
	return 0;
}

void input_arr(double arr[][5]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++)
			scanf("%lf",&arr[i][j]);
	}
}

double ave_row(double *row){
	int i;
	double sum=0;
	for(i=0;i<5;i++)
		sum+=*(row+i);
	return sum/5;
}

double ave_all(double (*arr)[5]){
	int i,j;
	double sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++)
			sum+=*(*(arr+i)+j);
	}
	return sum/15;
}

double get_max(double (*arr)[5]){
	int i,j;
	double max=*(*(arr+0)+0);
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			if(max<=*(*(arr+i)+j))
				max=*(*(arr+i)+j);
		}
	}
	return max;
}

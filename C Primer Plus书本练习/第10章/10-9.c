#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
#define ROW 3
#define COL 5
void copy_arr(int row,int col,const double (*src)[col],double (*tar)[col]);
void show_arr(int row,int col,const double (*src)[col],double (*tar)[col]);
int main(void){
	const double source[ROW][COL]={{1.1,1.2,1.3,1.4,1.5},{2.1,2.2,2.3},{3.1}};
	double target[ROW][COL];
	copy_arr(ROW,COL,source,target);
	show_arr(ROW,COL,source,target);
	return 0;
}

void copy_arr(int row,int col,const double (*src)[col],double (*tar)[col]){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			tar[i][j]=src[i][j];
	}
}

void show_arr(int row,int col,const double (*src)[col],double (*tar)[col]){
	int i,j;
	printf("The source array:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			printf("%.1lf ",src[i][j]);
		putchar('\n');
	}
	printf("\nThe target array:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			printf("%.1lf ",tar[i][j]);
		putchar('\n');
	}
}

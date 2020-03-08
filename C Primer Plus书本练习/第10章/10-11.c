#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
#define ROW 3
#define COL 5
void show_arr(int row,int (*arr)[COL]);
void double_up(int row,int (*arr)[COL]);
int main(void){
	int arr[ROW][COL]={{1,2,3,4,5},{1,2,3},{1}};
	printf("The array before doubled:\n");
	show_arr(ROW,arr);
	double_up(ROW,arr);
	printf("The array after doubled:\n");
	show_arr(ROW,arr);
	return 0;
}

void show_arr(int row,int (*arr)[COL]){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<COL;j++)
			printf("%d ",*(*(arr+i)+j));
		putchar('\n');
	}
}

void double_up(int row,int (*arr)[COL]){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<COL;j++)
			*(*(arr+i)+j)*=2;
	}	
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
int random_num(unsigned int sides);
void arrange(int *arr,int n);
int main(void){
	int i=0,arr[100];
	while(i<100){
		arr[i]=random_num(rand()%10+1);
		i++;
	}
	arrange(arr,100);
	for(i=0;i<100;i++){
		printf("%d ",arr[i]);
		if((i+1)%10==0)
			putchar('\n');
	}
	return 0;
}

int random_num(unsigned int sides){
	int roll;
	roll=(rand1()%sides+1);
	return roll;
}

void arrange(int *arr,int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(*(arr+i)<=*(arr+j)){
				temp=*(arr+j);
				*(arr+j)=*(arr+i);
				*(arr+i)=temp;
			}
		}
	}
}

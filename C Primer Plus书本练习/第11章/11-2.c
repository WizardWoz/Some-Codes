#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
void get_char(char *,int);
int main(void){
	int n;
	printf("Enter the number of chars:");
	scanf("%d",&n);
	getchar();			//��������n��ֵ���µĻس��� 
	char arr[n];
	printf("Enter the chars(<=n)\n");
	get_char(arr,n);
	fputs(arr,stdout);
	return 0;
}

void get_char(char *arr,int n){
	int i=0;
	for(i=0;i<n;i++){
		arr[i]=getchar();
		if(isspace(arr[i]))
			break;
	}
}

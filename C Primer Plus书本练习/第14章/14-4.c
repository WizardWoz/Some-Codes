#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
struct fullname{
	char fname[20];
	char mname[20];
	char lname[20];
};

struct member{
	int num;
	struct fullname name;
};

void print(const struct member *,int);
int main(void){
	struct member memarr[5]={
		{1000,{"张","X","三"}},{1001,{"李","\0","四"}},
		{1002,{"王","X","五"}},{1003,{"徐","\0","六"}},
		{1004,{"梁","X","杰"}} 
	};
	print(memarr,5);
	return 0;
}

void print(const struct member *arr,int n){
	int i;
	for(i=0;i<n;i++){
		if(strlen(arr[i].name.mname[0])!='\0')
			printf("%s, %s %c. -- %d\n",arr[i].name.fname,
			arr[i].name.lname,arr[i].name.mname[0],arr[i].num);
		else
			printf("%s, %s -- %d\n",arr[i].name.fname,
			arr[i].name.lname,arr[i].num);
	}
}

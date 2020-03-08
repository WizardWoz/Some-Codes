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
		{1000,{"��","X","��"}},{1001,{"��","\0","��"}},
		{1002,{"��","X","��"}},{1003,{"��","\0","��"}},
		{1004,{"��","X","��"}} 
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

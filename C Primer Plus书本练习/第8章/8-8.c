#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
char get_choice(void);
char get_first(void);
float get_fnum(void);
float get_snum(void);
float add(void);
float substract(void);
float multiply(void);
float divide(void);
int main(void){
	char choice;
	choice=get_choice();
	while(choice!='q'){
		switch(choice){
			case 'a':add();break;
			case 's':substract();break;
			case 'm':multiply();break;
			case 'd':divide();break;
			default:printf("Programme error!\n");break;
		}
		choice=get_choice();
	}
	printf("Bye!");
	return 0;
}

char get_choice(void){
	char ch;
	printf("Enter the operation of your choice:\n");
	printf("a.add				s.substract\n");
	printf("m.multiply			d.divide\n");
	printf("q.quit\n");
	ch=get_first();
	while(ch!='a'&&ch!='s'&&ch!='m'&&ch!='d'&&ch!='q'){
		printf("Please respond with a,s,m,d or q.\n");
		ch=get_first();
	}
	return ch;
}

char get_first(void){
	char ch;
	ch=getchar();
	while(getchar()!='\n')
		continue;
	return ch;
}

float get_fnum(void){
	float input;
	char ch;
	printf("Enter first number:");
	while(scanf("%f",&input)!=1){
		while((ch=getchar())!='\n')
			putchar(ch);
		printf(" is not a number.\nPlease enter a number,");
		printf("such as 2.5,-1.78E8,or 3:");
	}
	return input;
}

float get_snum(void){
	float input;
	char ch;
	printf("Enter second number:");
	while(scanf("%f",&input)!=1){
		while((ch=getchar())!='\n')
			putchar(ch);
		printf(" is not a number.\nPlease enter a number,");
		printf("such as 2.5,-1.78E8,or 3:");
	}
	while(fabs(input-0)<=0.000001){
		printf("Enter a number other than 0:");
		scanf("%f",&input);
	}
	return input;
}

float add(void){
	float fnum,snum;
	fnum=get_fnum();
	snum=get_snum();
	printf("%.1f + %.1f = %.1f\n",fnum,snum,fnum+snum);
}

float substract(void){
	float fnum,snum;
	fnum=get_fnum();
	snum=get_snum();
	printf("%.1f - %.1f = %.1f\n",fnum,snum,fnum-snum);
}

float multiply(void){
	float fnum,snum;
	fnum=get_fnum();
	snum=get_snum();
	printf("%.1f * %.1f = %.1f\n",fnum,snum,fnum*snum);
}

float divide(void){
	float fnum,snum;
	fnum=get_fnum();
	snum=get_snum();
	printf("%.1f / %.1f = %.1f\n",fnum,snum,fnum/snum);
}

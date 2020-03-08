#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
double mul2(double x){
    return (x * 2.0);
}

double mul1(double x){
    return (x * x);
}

void transform(double *source, double *target, int num, double (*fun)(double)){
	int i;
    for (i = 0; i < num; i++)
        target[i] = fun(source[i]);
}

int main(void){
    double source[100];
    double target[100];
    int i;
    for (i = 0; i < 100; i++)
        source[i] = i;
    
    printf("Use sqr:\n");
    transform(source, target, 100, sqrt);
    for (i = 0; i < 100; i++){
        printf("%.2lf ", target[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }

    printf("Use sin:\n");
    transform(source, target, 100, sin);
    for (i = 0; i < 100; i++){
        printf("%.2lf ", target[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }

    printf("Use mul2:\n");
    transform(source, target, 100, mul2);
    for (i = 0; i < 100; i++){
        printf("%.2lf ", target[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }

    printf("Use mul1:\n");
    transform(source, target, 100, mul1);
    for (i = 0; i < 100; i++){
        printf("%.2lf ", target[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <float.h>
int main(void){
	double dou=1.0/3.0;
	float flo=1.0/3.0;
	printf("%lf %.12lf %.16lf\n",dou,dou,dou);
	printf("%f %.12f %.16f\n",flo,flo,flo);
	printf("%d %d",FLT_DIG,DBL_DIG);
	return 0;
}


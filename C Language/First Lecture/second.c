#include<stdio.h>
/*
int   %d   4
float  %f  4
char  %c,s 1
double  %lf  8
*/

main(){
	int num=10;
	float num1=25.5;
	double num2=650.56;
	char name='A';
	char name1[20]="Walter";
	printf("%d\n",num);
	printf("%f\n",num1);
	printf("%lf\n",num2);
	printf("%c\n",name);
	printf("%s",name1);
}



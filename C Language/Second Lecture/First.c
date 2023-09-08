/*
Syntax:
(condtion)?exp:exp;

*/
#include<stdio.h>
main(){
	int age;
	printf("Enter the age :");
	scanf("%d",&age);
	(age>18)?printf("You are allowed"):printf("Not allowed");
	
}

// Q5 - find minimum number from the given 3 numbers using the ternary operator.

#include<stdio.h>

void main()
{
	int a,b,c,min;
	
	printf("Enter first number :- ");
	scanf("%d",&a);
	
	printf("Enter second number :- ");
	scanf("%d",&b);
	
	printf("Enter third number :- ");
	scanf("%d",&c);
	
	min = (a<b)?((a<c)?a:c):((b<c)?b:c);
	
	printf("The Min number is %d",min);
}

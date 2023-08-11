// Q1 - Print all even nmber from a given range using UDF.

#include<stdio.h>

vin(int a,int b)
{
	int i;
	
	printf("Even numbers are :- ");
	
	for(i=a;i<=b;i++)
	{
		if(i % 2 == 0)
		{
			printf("%d,",i);
		}
	}
}

void main()
{
	int a,b;
	
	printf("Enter First Number :- ");
	scanf("%d",&a);
	
	printf("Enyer Second Number :- ");
	scanf("%d",&b);
	
	vin (a,b);
}

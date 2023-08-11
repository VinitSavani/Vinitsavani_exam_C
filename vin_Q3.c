// Q3 - Write all leap years from a given range into a text file.

#include<stdio.h>

void main()
{
	int a,b,i;
	
	FILE *p1;
	
	printf("Program to find leap year\n");
	
	printf("\nEnter starting year :- ");
	scanf("%d",&a);
	
	printf("Enter ending year :- ");
	scanf("%d",&b);
	
	p1 = fopen("leap.txt","w");
	
	printf("\n");
	
	if(p1 != NULL)
	{
		printf("File Created Sucsessfully...");
	}
	else
	{
		printf("File Creation Failed.....");
	}
	
	for(i=a;i<=b;i++)
	{
		if(i % 4 == 0 || i % 100 == 0 || i % 400 == 0)
		{
			fprintf(p1,"%d\n",i);
		}
		
	}
}

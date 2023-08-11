// Q4 - print all even numbers from a given 2D array using poimter.

#include<stdio.h>

void main()
{
	int r,c,i,j;
	
	printf("Enter number of rows :- ");
	scanf("%d",&r);
	
	printf("Enter number of colums :- ");
	scanf("%d",&c);
	
	int  A[r][c];
	
	printf("Enter 2D array's Elements :- \n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			printf("A[%d][%d] :- ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	int *p[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			p[i][j] = & A[i][j];
		}
	}
	printf("Even numbers are :-\n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			if(*p[i][j] % 2 == 0)
			{
				printf("%d\n",*p[i][j]);
			}
		}
	}
}

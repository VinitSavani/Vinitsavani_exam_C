// Q2 - Find a square of all elements from given 1D array. 

#include<stdio.h>

void main()
{
	int i,v;
	
	printf("\nEnter 1D Array size :- ");
	scanf("%d",&v);
	
	int A[v];
	
	for(i=0;i<v;i++)
	{
		printf("A[%d] :- ",i);
		scanf("%d",&A[i]);
	}
	
	printf("\nSquare of all elements are :-\n\n");
	
	for(i=0;i<v;i++)
	{
		printf("A[%d] :- %d\n",i,A[i]*A[i]);
	}
	
}

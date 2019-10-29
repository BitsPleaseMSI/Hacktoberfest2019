#include<stdio.h>
int i,j;
void main()
{
	for (i=1; i < 6; i++)
	{
		for (j=1; j<i+1; j++)
		{
			printf("%d",j);
		}
		printf("\n");

	}
}
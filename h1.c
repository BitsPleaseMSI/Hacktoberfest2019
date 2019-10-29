#include<stdio.h>
int i,j;
void main()
{
	for (i=1; i < 10; i++)
	{
		for (j=1; j<10; j++)
		{
			if (i==1 || i==9 || j==1 || j==9)
			{
				printf("5");
			}
			else if (i==2 || i== 8 || j==2 || j==8)
			{
				printf("4");
			}
			else if (i==3 || i== 7 || j==3 || j==7)
			{
				printf("3");
			}
			else if (i==4||i==6||j==4||j==6)
			{
				printf("2");
			}
			else 
			{
				printf("1");
			}

		}		
		printf("\n");

	}
}
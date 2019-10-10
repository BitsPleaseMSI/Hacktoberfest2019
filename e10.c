#include <stdio.h> 

int main() 
{ 

	int num1[10],i,avg,add=0;
	printf("Enter number 10nos");
	for(i=0;i<10;i++)
    {scanf("%d",&num1[i]);
	 add=add+num1[i];
    }
	avg=add/10;

	printf("Average is %d ",avg); 

	return 0; 
} 

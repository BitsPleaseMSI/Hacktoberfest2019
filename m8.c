#include <stdio.h> 

int main() 
{ 

	int num1,num2, max;
	printf("Enter two number to get the largest:")
    scanf("%d",&num1);
	scanf("%d",&num2);
	max = (num1 > num2) ? num1 : num2; 


	printf("Largest number is %d ",max); 

	return 0; 
} 

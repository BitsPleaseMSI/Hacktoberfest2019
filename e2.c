#include<stdio.h>

void main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if(a<0)
        printf("%d is negative",a);
    else
        printf("%d is positive",a);   
}

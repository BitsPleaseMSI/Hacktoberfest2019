#include<stdio.h>
void main()
{
int n,o,r,result = 0;

printf("Enter number");
scanf("%d", &n);
o=n;
while(o!= 0)
{ 
 r=o%10;
 r=r+(r*r*r);
  o/10;
  }
 if(r== n)
 printf("%d is an Armstrong number",n);
 else
 printf("%d is not an Armstrong number",n);
 }

#include<stdio.h>
#include<conio.h>
int main()
{
int n,ori,r,result = 0;
clrscr();
printf("Enter number");
scanf("%d", &n;
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
 getch();
}

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int n,temp,sum,ld;
clrscr();
printf("Armstrong nos upto 500 are::");
for(n=1;n<=500;n++)
{
temp=n;
sum=0;
while(temp!=0)
{
ld=temp%10;
sum+=pow(ld,3);



temp=temp/10;
}
if(sum==n)
printf("%d   ",n);
}

getch();
}

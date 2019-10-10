#include<stdio.h>
void main()
{
int no,rev,sum;
scanf("%d",&no);
while(no!=0)
{
rev=no%10;
sum=sum*10+rev;
no=no/10;
}
printf("no is %d",sum);
}

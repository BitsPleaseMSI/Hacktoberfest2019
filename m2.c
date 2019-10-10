#include<stdio.h>
#include<conio.h>
void main()
{
long n,temp,oct=0,a=1;
int r,i;
char ch,hex[8];
clrscr();
printf("Enter a number::");
scanf("%ld",&n);
temp=n;
while(temp!=0)
{
r=temp%8;
oct=r*a+oct;
temp=temp/8;
a*=10;
}
printf("\nOctal of given no is::%ld",oct);
temp=n;
a=0;
hex[0]='\0';
while(temp!=0)
{
r=temp%16;
temp=temp/16;
a++;
if(r>10)
ch='A'+r-10;
else
ch='0'+r;
for(i=a;i>0;i--)
hex[i]=hex[i-1];
hex[0]=ch;
}
printf("\nHexadecimal of given no is::%s",hex);
getch();
}



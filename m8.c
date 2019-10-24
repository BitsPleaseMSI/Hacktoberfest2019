#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,lg;
clrscr();
printf("Enter three numbers::");
scanf("%d %d %d",&a,&b,&c);
lg=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
printf("%d is largest number",lg);
getch();
}

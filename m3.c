#include<stdio.h>
#include<conio.h>

void main()
{
char ch;
clrscr();
printf("Enter a character::");
scanf("%c",&ch);
switch(ch)
{
	case 'a':
	case 'e':
	case 'i':
	



case 'o':
case 'u':printf("Given character is a vowel");
		break;
	default:printf("Given character is not a vowel");
}
getch();
}

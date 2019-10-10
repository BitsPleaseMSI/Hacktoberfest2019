#include<iostream>
#include<stdio.h>
 
using namespace std;
void len(char st[])
{	int i;
    for(i=0;st[i]!='\0';++i);
	
	cout<<"\nLength of the string is "<<i;
}

int main()
{
	char str[100];
	int i;
	cout<<"Enter a string:";
	gets(str);
	
	len(str);
	return 0;
}

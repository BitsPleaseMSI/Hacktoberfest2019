#include<iostream.h>
#include<conio.h>

class GfG 
{ 
   public: 

    static void printMsg() 
    { 
	cout<<"\nWelcome to GfG!";
    } 
}; 

void demo() 
{   
    static int count = 0; 
    cout << count << " ";  
    count++; 
} 

void main()
{ 
clrscr();
    for (int i=0; i<5; i++)     
        demo(); 
    GfG::printMsg();
getch(); 
}

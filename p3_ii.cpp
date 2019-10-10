#include<iostream.h>
#include<conio.h>

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            for(int j= n; j>=1;j--)
                cout<<"*";
            cout<<"\n";
         }
     getch();
  }
        
    

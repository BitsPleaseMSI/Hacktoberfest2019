#include<iostream>
using namespace std;
int main()
{
    int n=8,num=5,pattern[9][9];
    for(int i=0;i<=n/2;i++,num--)
     for(int j=i;j<=n-i;j++)
     {
         pattern[i][j]=pattern[j][i]=num;          
     }
     num=5;
    for( int i=n;i>=n/2;i--,num--) 
     for(int j=i;j>=n-i;j--)
     {
         pattern[i][j]=pattern[j][i]=num;
     }
     for(int i=0;i<=n;i++)
     {
       for(int j=0;j<=n;j++)
       cout<<pattern[i][j]<<" ";
     cout<<endl;
     } 

}  

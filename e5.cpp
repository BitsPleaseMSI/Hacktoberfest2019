#include <iostream>

using namespace std;

int main()
{
    int **mat1,**mat2,i,j,**mat3,row,col;
   cout<<"Enter the row and column\n";
   cin>>row>>col;
  mat1 = new int*[row];
for(i = 0; i < row; ++i)
    mat1[i] = new int[col];
    
   mat2 = new int*[row];
for(i = 0; i < row; ++i)
    mat2[i] = new int[col];
    
     mat3 = new int*[row];
for(i = 0; i < row; ++i)
    mat3[i] = new int[col];
    
    
   cout<<"Enter the 1st Matrix (row wise)\n";
   for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    cin>>mat1[i][j];
   cout<<"Enter the 2nd Matrix (row wise)\n";
    for(i=0;i<row;i++)
     for(j=0;j<col;j++)
     cin>>mat2[i][j];
     
    for(i=0;i<row;i++)
     for (j=0;j<col;j++)
      mat3[i][j]=mat1[i][j]+mat2[i][j];
    
    cout<<"Sum of both matrix\n";
    
    for(i=0;i<row;i++){
        cout<<endl;
    for(j=0;j<col;j++)
     cout<<mat3[i][j]<<'\n';
     
    }
    
    return 0;
}

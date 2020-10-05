#include<iostream>
using namespace std;

int main()
{
	int a;
	//clrscr();

	cout<<"Enter the number : ";
	cin>>a;
	int s=a;
	for(int i=0;i<((2*a)+1)/2;++i)
	{
		if(i==0)
			for(int j=1;j<(2*a)-1;++j)
			  cout<<a<<" ";
		else
		   {   	cout<<a<<" ";

				for(int j=0;j<i-1;++j)
				  cout<<a-j-1<<" ";
				for(int j=0;j<(2*s)-1;++j)
				  cout<<s<<" ";
				for(int j=i-1;j>0;--j)
				  cout<<a-j<<" ";
		   }
		cout<<a<<endl;
		s--;
	}
		s++;
	for(int i=(2*a-3)/2;i>=0;--i)
	{   s++;
		if(s==a)
			for(int j=0;j<(2*a)-1;++j)
			  cout<<a<<" ";
		else
			{
				cout<<a<<" ";

				for(int j=0;j<i-1;++j)
				  cout<<a-j-1<<" ";
				for(int j=0;j<(2*s)-1;++j)
				  cout<<s<<" ";
				for(int j=i-1;j>0;--j)
				  cout<<a-j<<" ";
				cout<<a;
			  }
	cout<<endl;

	}

return 0;
}

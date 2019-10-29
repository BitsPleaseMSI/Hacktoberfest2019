#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no of elemnets in array";
    cin>>n;
    int ar[n],sum=0;
    cout<<"enter the array";
    for(int i=0;i<n;i++)
        cin>>ar[i];
     for(int i=0;i<n;i++)
        sum+=ar[i];
    cout<<"the avg is = "<<sum/n<<endl;

    return 0;
}
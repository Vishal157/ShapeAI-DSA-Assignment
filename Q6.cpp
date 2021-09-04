#include<iostream>
using namespace std;
int main()
{
    int n,n1;
    cout<<"Enter n : ";
    cin>>n;
    n1=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n1-1;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        n1--;
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n,fl=0,sl=-1;
    cout<<"Enter number of elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[fl])
        fl=i;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[fl])
        {
            if(sl==-1)
            sl=i;
            else if(a[i]>a[sl])
            sl=i;
        }
    }
    cout<<"Second largest : "<<a[sl];
    return 0;
}
#include<iostream>
using namespace std;
void rotateLeft(int d, int arr[],int n)
{
    int temp,j=0;
    for(int i=0;i<d;i++)
    {
        temp=arr[0];
        for(int j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int d,n;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    rotateLeft(d,arr,n);
    return 0;
}
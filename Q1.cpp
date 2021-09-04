#include <iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    cout<<"Values of a and b before swapping : "<<a<<" "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"Values of a and b after swapping : "<<a<<" "<<b<<endl;
    return 0;
}
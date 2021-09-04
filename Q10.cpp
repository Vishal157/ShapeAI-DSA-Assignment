#include<iostream>
using namespace std;
int camelcase(string s)
{
int ct=1;
for(int i=0;i<s.length();i++)
{
    if(s[i]>='A'&&s[i]<='Z')
    ct++;
}
return ct;
}
int main()
{
    string s;
    cin>>s;
    int result=camelcase(s);
    cout<<result<<endl;
    return 0;
}
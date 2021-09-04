#include<iostream>
using namespace std;
void gradingStudents(int grades[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(grades[i]>=38&&grades[i]%5>=3)
        {
            while(grades[i]%5!=0)
            {
                grades[i]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<grades[i]<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int grades[n];
    for(int i=0;i<n;i++)
    cin>>grades[i];
    gradingStudents(grades,n);
}
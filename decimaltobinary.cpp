#include<iostream>
#include<stdio.h>
using namespace std;
int dtob( int n)
{   
    int ar[32]={0};
    for(int i=0;i<32;i++)
    {
        if(n%2!=0)
        ar[i]=1;
        n=n/2;

    }
    for(int i=31;i>=0;i--)
    {
        cout<<ar[i]<<"";

    }
    
    return 0;
}
int main()
{
    int a;
    cout<<"Enter your no";
    cin>>a;
    dtob(a);
    return 0;
}
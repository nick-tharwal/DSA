#include<iostream>
#include<stdio.h>
using namespace std;
bool ispow2( int n)
{
    if(n==0)
    return false;
    while(n!=1)
    {
        if(n%2!=0)
        return false;
        n=n/2;
    }
    
    return true;
}
int main()
{
    int a;
    cout<<"Enter your no";
    cin>>a;
   if(ispow2(a))
   cout<<"Yes";
   else 
   cout<<"No";
    return 0;
}
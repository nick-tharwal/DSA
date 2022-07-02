#include<iostream>
#include<stdio.h>
using namespace std;
bool tre( int n)
{
    if(n==0)
    return false;
   
    
    return ((n&(n-1))==0);
}
int main()
{
    int a;
    cout<<"Enter your no";
    cin>>a;
   if(tre(a))
   cout<<"Yes";
   else 
   cout<<"No";
    return 0;
}
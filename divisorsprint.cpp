#include<iostream>
#include<stdio.h>
using namespace std;
int divisors( int n)
{
    int i;
    for(i=1;i*i<=n;i++)
    if(n%i==0)
    cout<<"  "<<i;

    for(;i>=1;i--)
    if(n%i==0)
    cout<<"  "<<(n/i);
    
    return 0;
}
int main()
{
    int a;
    cout<<"Enter your no";
    cin>>a;
    divisors(a);
    return 0;
}
#include<iostream>
#include<stdio.h>
using namespace std;
int gcd( int a,int  b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
    return 0;
}
int main()
{
    int a, b , c;
    cout<<"Enter no to find their GCD";
    cin>>a>>b;
    c=gcd(a,b);
    cout<<"Gcd="<<c;
    
    return 0;
}
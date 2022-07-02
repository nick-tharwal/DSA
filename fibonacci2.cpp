#include<iostream>
#include<stdio.h>
using namespace std;
int fibo2( int n)
{
    int c=0;
    if(n==0 || n==1)
    return n;
    int a=0, b=1;
    for (int j=2 ;j<=n;j++)
    {
        c=a+b;
        a=b;
        b=c;

    }
    
    return c;
}
int main()
{
    int a;
    cout<<"Enter your no";
    cin>>a;
    int d=fibo2(a-1);
    cout<<d<<"  ";
   
    return 0;
}
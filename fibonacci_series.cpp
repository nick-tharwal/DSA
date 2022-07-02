#include<iostream>
#include<stdio.h>
using namespace std;
int fibo( int n);

int main()
{
    int a;
    cout<<"Enter your no";
    cin>>a;
    int n = fibo(a-1);
     cout<<n<<"  ";
    return 0;
    
}
int fibo( int n)
{
    if(n==1 || n==0)
    return n;
    
     return (fibo(n-1)+fibo(n-2));
    
    
}
#include<iostream>
#include<stdio.h>
using namespace std;
bool isprime(int n)
{
    if(n==1)
    return false;
    if(n==2 || n==3)
    return true;
    if(n%2==0 || n%3==0)
    return false;
    for(int i=5 ; i*i<=n;i=i+6)
    if(n%i==0 || n%(i+2)==0)
    return false;
    return true;
}
int main()
{
    int a;
    for (int i = 0; i < 10; i++)
    {
        /* code */
    
    
    cout<<"Enter your number";
    cin>>a;
    a=isprime(a);
    if(a==0)
    cout<<"Not prime";
    else
    cout<<"is prime";
    }
    return 0;
}
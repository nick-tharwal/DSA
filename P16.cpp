#include<iostream>
#include<stdio.h>
using namespace std;
bool isprime(int n);
void primefactors( int n)
{  for(int i=2;i<n;i++)
    if(isprime(i))
    {
        int x=i;
        
        while(n%x==0)
        {
            cout<<"    "<<i;
            x=x*i;

        }
    }
  
   
}
bool isprime( int n)
{
    if(n==1)
    return false;
    if(n==2 || n==3)
    return true;
    if(n%2==0 || n%3==0)
    return false;
    for(int i=5;i*i<=n;i++)
    if(n%i==0 || n%(i+2)==0)
     return false;

    return true;
}
int main()
{
    int a;
    cout<<"Enter your no";
    cin>>a;
    primefactors(a);
    
    return 0;
}
#include<iostream>
#include<stdio.h>
using namespace std;
void primefactors( int n)
{  if(n<=1)
return;
    for(int i=2;i*i<n;i++)
    while(n%i==0)
    {
        cout<<"  "<<i;
        n=n/i;
    }
    
   if(n>1)
   cout<<"  "<<n;
  
   
}
int main()
{
    int a;
    cout<<"Enter your no";
    cin>>a;
    primefactors(a);
    return 0;
    
}
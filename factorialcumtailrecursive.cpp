#include<iostream>
#include<stdio.h>
using namespace std;
int facttail( int n,int k)
{
    if(n==0 || n==1)
    return k;
    return facttail(n-1,k*n);
    
   
}
int main()
{ int n,k=1;
    cout<<"enter";
    cin>>n;
   k= facttail(n,k);
    cout<<"Factorial"<<k;
    return 0;
}
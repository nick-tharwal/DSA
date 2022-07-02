#include<iostream>
#include<stdio.h>
using namespace std;
int res( int n)
{    int res=0;
     while(n>0)
     {
         res=res*10+(n%10);
         n=n/10;
     }
    
    return res;
}
int main()
{
    int a;
    cout<<"Enter your no";
    cin>>a;
    int s=res(a);
    cout<<s<<"  ";
   
    return 0;
}
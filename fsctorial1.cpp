#include<iostream>
#include<stdio.h>
using namespace std;
long fact( long n)
{   
    if(n==1)
    return 1;
    return n*fact(n-1);
    
    return 0;
}
int main()
{
    long a;
    cout<<"Enter your no";
    cin>>a;
   cout<<fact(a)<<"  ";
    return 0;
}
#include<iostream>
#include<stdio.h>
using namespace std;
bool res( int n)
{    int res=0;
  int  temp=n;
     while(temp>0)
     {
         res=res*10+(temp%10);
         temp=temp/10;
     }
    
    return (res==n);
}
int main()
{
    int a;
    cout<<"Enter your no";
    cin>>a;
    if(res(a))
    cout<<"palindrome";
    else
    cout<<"not palindrome  ";
   
    return 0;
}
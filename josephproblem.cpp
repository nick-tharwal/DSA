#include<iostream>
#include<stdio.h>
using namespace std;
int joseph(int n ,int k)
{
    if(n==1)
    return 0;
    else
    return (joseph(n-1,k)+k)%n;
}
int main()
{
    int a,k;
    cout<<"Enter your total  noof people";
    cin>>a;
    cout<<"Enter the which person is to killed";
    cin>>k;
   int r= joseph(a,k);
   cout<<"Person survived:"<<r;
    return 0;
}
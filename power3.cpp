#include<iostream>
#include<stdio.h>
using namespace std;
int power( int x , int n)
{   
    int res=1 ,d;
    while(n>0)
    {
        if(n%2!=0)
        res=res*x;
        x=x*x;
        n=n/2;

    }
           
    return res;
}
int main()
{
    int a ,b;
    cout<<"Enter your no";
    cin>>a;
    cout<<"Enter its power";
    cin>>b;
    int t= power(a , b);
    cout<<t<<"  ";
    return 0;
}
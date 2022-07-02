#include<iostream>
#include<stdio.h>
using namespace std;
int power( int n , int l)
{    int temp =1;
    for(int i=0 ; i<l;i++)
           temp=temp*n;
           return temp;
    
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
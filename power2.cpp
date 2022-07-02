#include<iostream>
#include<stdio.h>
using namespace std;
int power( int n , int l)
{   if(n==1 || l==0)
     return 1;
     int temp = power( n,l/2);
     temp=temp*temp;
     if(l%2==0)
     return temp;
     else
     return temp*n;

           
    
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
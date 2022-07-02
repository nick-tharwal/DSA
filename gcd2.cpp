#include<iostream>
#include<stdio.h>
using namespace std;
int gcd( int a , int b)
{
   while(a!=b)
   {
       if(a>b)
       a=a-b;
       else
       b=b-a; 
   }
    
    return a;
}
int main()
{
    int a , b;
    cout<<"Enter your  two no";
    cin>>a>>b;
    int q=gcd(a , b);
    printf("GDC of %d and %d is %d", a , b ,q);
   
    return 0;
}
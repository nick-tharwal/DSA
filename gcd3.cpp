#include<iostream>
#include<stdio.h>
using namespace std;
int gcd( int a , int b)
{
    
    if(b==0)
    return a;
    else 
    return gcd(b,a%b);
    
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
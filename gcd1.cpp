#include<iostream>
#include<stdio.h>
using namespace std;
int gcd( int a , int b)
{
    int res = min(a,b);
    
    while(res>0)
    {
        if(a%res==0 && b%res==0)
        {break;}
        res--;
    }
    
    return res;
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
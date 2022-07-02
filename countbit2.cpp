#include<iostream>
#include<stdio.h>
using namespace std;
int countbit( int n)
{
    int res=0;
    while(n>0)
    {
        n=((n-1)&n);
        res++;
    }
    
    return res;
}
int main()
{
    int a;
    cout<<"Enter your no";
    cin>>a;
    int c=countbit(a);
    printf("Bits in the no %d are  %d",a,c);
    return 0;
}
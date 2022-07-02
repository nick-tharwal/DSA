#include<iostream>
#include<stdio.h>
using namespace std;
int digic( int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        ++count;

    }

    
    return count;;
}
int main()
{
    int a;
    cout<<"Enter your no";
    cin>>a;
    int w =digic(a);
    cout<<w<<"  ";
    return 0;
}
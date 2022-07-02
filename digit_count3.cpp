#include<iostream>
#include<stdio.h>
 #include<math.h>
using namespace std;
int digic( int n)
{
    if(n==0)
    return 0;
     return 1+digic(n/10);
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
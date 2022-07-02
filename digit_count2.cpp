#include<iostream>
#include<stdio.h>
 #include<math.h>
using namespace std;
int digic( int n)
{
    return floor(log10(n)+1);
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
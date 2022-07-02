#include<iostream>
#include<stdio.h>
using namespace std;
int trail(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5)
    res= res+n/i;
    return res;
}
int main()
{
    int a;
    cout<<"Enter a no To find trailing zeroes in his factorial";
    cin>>a;
    int y =trail(a);
    cout<<"the no of zeroes"<<y;
    return 0;
}
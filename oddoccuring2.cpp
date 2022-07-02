#include<iostream>
#include<stdio.h>
using namespace std;
int oddr( int ar[],int n=7)
{
    int res = 0;
    for(int i=0;i<n;i++)
    res=res^ar[i];
    cout<<res<<"  ";
    return res;
}

int main()
{
    int ar[7];
    cout<<"Enter you array values";
    for(int i=0;i<7;i++)
    {
        cin>>ar[i];
    }
   oddr( ar);
    return 0;
}
#include<iostream>
#include<stdio.h>
using namespace std;
int kthbit( int n,int k)
{
    if((n&(1<<(k-1)))==1)
    printf("Yes");
    else 
    printf("No");
    return 0;
}
int main()
{
    int n,k;
    cout<<"Enter your n value";
    cin>>n;
    cout<<"Enter your k value";
    cin>>k;
    kthbit(n,k);
    return 0;
}
#include<iostream>
#include<stdio.h>
using namespace std;
int seive( int n)
{
    int prime[n+1]={0};
    for(int i=2;i<=n;i++)
     if(prime[i]==0)
      for(int j=i*i;j<=n;j+=i)
        prime[j]=1;
    

    for(int i=2;i<=n;i++)
    if(prime[i]==0)
    cout<<i<<"  ";
    return 0;
}
int main()
{
    int a;
    cout<<"Enter your no";
    cin>>a;
    seive(a);
    return 0;
}
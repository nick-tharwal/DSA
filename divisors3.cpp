#include<iostream>
#include<stdio.h>
using namespace std;


int dvsr( int n)
{
  int i;
  for( i=1;i*i<=n;i++)
  if(n%i==0)
      cout<<i<<"  ";
  for(i--;i>=1;i--)    
  if(n%i==0)
      cout<<(n/i)<<"  ";  
}
int main()
{
    int a; 
    cout<<"Enter your number";
    cin>>a;
    dvsr(a);
    return 0;
}

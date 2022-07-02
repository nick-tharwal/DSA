#include<iostream>
#include<stdio.h>
using namespace std;


int dvsr( int n)
{
  for(int i=1;i*i<=n;i++)
  {
      if(n%i==0)
      {
          cout<<i<<"  ";
          if(i!=(n/i))
          cout<<(n/i)<<"  ";
      }
  }
  
}
int main()
{
    int a; 
    cout<<"Enter your number";
    cin>>a;
   dvsr(a);
    return 0;
}

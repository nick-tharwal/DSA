#include<iostream>
#include<stdio.h>
using namespace std;


int prntprm( int n)
{
   
   if(n<=0)
  { cout<<"not applicable";
   return 0;
  }
   for(int i=2;i*i<=n;i++)
   {
       while(n%i==0)
      { cout<<i<<"  ";
       n=n/i;
   
      }   
   }
    if(n>1)
    cout<<n<<"  ";
    return 0;
}
int main()
{
    int a;
    
    
    
    cout<<"Enter your number";
    cin>>a;
   prntprm(a);
    return 0;
}

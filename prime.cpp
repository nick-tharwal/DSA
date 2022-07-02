#include<iostream>
using namespace std;
int main()
{
int n,a;
cin>>n;
for( a=2;a<n;a++)
 if(n%a==0)
 {
 cout<<"not a prime";
  	break;
  }
  if(a==n)
  cout<<"prime";
return 0;
}


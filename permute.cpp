#include<iostream>
#include<stdio.h>
using namespace std;
void permute( string s ,int i=0)
{ if(i==(s.length())-1)
  { cout<<s<<" ";
   return;
  }

  for(int j=i;j<(s.length());j++) 
  {
    swap(s[i],s[j]);
    permute(s,i+1);
    swap(s[i],s[j]);

  }
    // return 0;
}
int main()
{
     string s={"ABCDXYZ"};
    permute(s);
    return 0;
}
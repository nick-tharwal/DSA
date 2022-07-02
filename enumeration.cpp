#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;
int main()
{
    
   register int a=5;
      int &b=a;
    b=10;
    cout<<""<<a<<""<<b;
    a--;
    // b--;
    cout<<""<<a<<""<<b;
	// cout<<"Enter yiur twoo numbers";
    // cin>>a>>b;
    // cout<<a+b;'
   int  &c=a;
    c=11;
    cout<<"  "<<a<<"  "<<b<<"  "<<c;
    a--;
    cout<<"  "<<a<<"  "<<b<<"  "<<c;
    
    

}
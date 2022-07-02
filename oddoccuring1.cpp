#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int ar[7];
    cout<<"Enter you array values";
    for(int i=0;i<7;i++)
    {
        cin>>ar[i];
    }
     for(int i=0;i<7;i++)
   {
       int count=0;
   for(int j=0;j<7;j++) 
   if(ar[i]==ar[j])
   count++;
   if(count%2!=0)
   printf("%d  ",ar[i]);
   } 
    return 0;
}
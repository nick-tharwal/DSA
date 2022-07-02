#include<iostream>
#include<stdio.h>
using namespace std;
int patternc(int pattern,int ar[],int n)
{ int count=0;
for(int i=0;i<n;i++)
{
    if((pattern&ar[i])==pattern)
    count++;
}

return count;
}
int maxand(int ar[],int n)
{
    int count,res=0;
    for(int bit=31;bit>0;bit--)
    {
        count=patternc(res|(1<<bit),ar,n);
        if(count>=2)
        res=res|(1<<bit);
    }
    return res;
}
int main()
{
    int ar[]={213 ,213, 2323 ,34 ,354656, 7 ,68 ,78 ,8574 ,56 ,35 ,24 ,45 ,67 ,58 ,67 ,56 ,345 ,36 ,7 ,78 ,47 ,356 ,54 ,765 ,8} , n=26;
   int r= maxand(ar,n);
   cout<<"max and value\t"<<r;
    
    return 0;
}
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
 bool isprime(int n)
    {
        if(n<=1)
        return false;
        if(n==2 || n==3)
        return true;
        if(n%2==0 || n%3==0)
        return false;
        for(int i=5;i<=n;i=i*6)
        {
            if(n%i==0 || n%(i+2)==0)
            return false;
            
        }
        return true;
    }
    int exactly3Divisors(int N)
    {
       int count=0;
        N=sqrt(N);
       for(int i=1;i<=N;i++)
       {
           if(isprime(i))
           count++;
       }
       
       return count;
       
       
       
       
    }
int main()
{
   int a=0;
   cin>>a;
   int q=exactly3Divisors(a);
   cout<<q;

    return 0;
}
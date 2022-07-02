#include<bits\stdc++.h>
using namespace std;

	int fact(int n)
	{
	    if(n==0)
	    return 0;
	    if(n==1)
	    return 1;
	    return fact(n-1)+fact(n-2);
	}
	int TotalWays(int N)
	{
	    if(N<=0)
	    return 1;
	    
	   
	   return (N+fact(N))*(N+fact(N)); // Code here
	}
    int main()
    {
        int a,b;
        cin>>a;
        b=TotalWays(a);
        cout<<b;
        return 0;
    }
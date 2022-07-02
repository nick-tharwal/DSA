// #include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;

int countSetBits(int n)
{
    int i=1, ans = 0;
    while(i<=n){
        int numberOfCompletedIntervals = (n+1)/i;
        ans += (numberOfCompletedIntervals/2)*i;
        int left = (n+1) - numberOfCompletedIntervals*i;
        if(numberOfCompletedIntervals%2!=0)
            ans += left;
        i*=2;
    }
    return ans;
}

int main()
{
    int n; cin>>n;
    cout<<countSetBits(n)<<endl;
    return 0;
}
#include<iostream>
#include<stdio.h>
using namespace std;
bool sprs(int n )
{
    int count=0;
    while(n>0)
    {
        if(n%2!=0)
        count++;
        else
        count--;
        if(count>1)
        return false;
        n=n/2;
    }
    return true;
}
int main()
{
    int s;
    sprs(a);
    return 0;
}
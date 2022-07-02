#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int superset( string  str)
{
    int n = str.length();
    int powersize = pow(2,n);
    for(int i=0;i<powersize;i++)
    {
        for(int j=0;j<n;j++)
        {
           if((i&(1<<j))!=0)
           cout<<str[j];
        }
        cout<<"\n";
    }
    return 0;
}
int main()
{
    string str={"abc"};
    // cout<<"Enter your no";
    // cin>>s;
    superset(str);
    return 0;
}
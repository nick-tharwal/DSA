#include<iostream>
// #include<vectors>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> v;
   v.push_back(11);
   v.push_back(22);
   v.push_back(33);
   for(int i=0;i<(v.size());i++)
   {
     cout<<v[i]<<" ";
   }

   vector<int>::iterator it;

   for(it=v.begin();it<(v.end());it++)
   {
    cout<<*it<<endl;
   }
   for(auto element::v)
   {
    cout<<element<<endl;
   }//1 2 3

   
    return 0;
}
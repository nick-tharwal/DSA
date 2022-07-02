#include<bits\stdc++.h>
using namespace std;
int maxo(int arr[],int n)
{
   int res=0;
   vector<int> v;
   v.push_back(0);
   for(int i=0;i<n;i++)
   {
    if(arr[i]==1)
     res++;
     else
     {
        v.push_back(res);
        res=0;
     }
   }

   return *max_element(v.begin(),v.end());

}
int main()
{
    int ar[]={1,0,1,1,0};
    int n=5;
int t=maxo(ar,n);
cout<<"Max con. ones : "<<t;
return 0;
}
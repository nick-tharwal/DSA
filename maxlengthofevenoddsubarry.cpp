#include<bits\stdc++.h>
using namespace std;
int maxxew(int arr[],int n)
{
    int res=1,curr=1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0) )
        {
            curr++;
            res = max(curr,res);
        }
        else
        curr=1;
    }

return res;
}
int main()
{
    int ans=0;
int arr[]={2,3,4,9,4,2,6,435,235,7};
int k = maxxew(arr,10);
cout<<"ans:"<<k;
cin>>ans;
cout<<"wtf";
return 0;
}
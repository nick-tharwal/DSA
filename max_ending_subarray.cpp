#include<bits\stdc++.h>
using namespace std;
int maxSum(int arr[] , int n)
{
    int res=arr[0],maxending=arr[0];
    for(int i=1;i<n;i++)
    {
        maxending=max(maxending+arr[i],arr[i]);
        res=max(res,maxending);

    }
    return res;
}
int main()
{
    
   int d=0;
    int arr[]={-5,1,-2,3,-1,2,-2};
    // cout<<"Enter your no";
    // cin>>d;
    int j=  maxSum(arr,7);
    cout<<"max sum is:"<<j;
    // printf(arr);
    return 0;
}
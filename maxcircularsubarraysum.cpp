#include<bits\stdc++.h>
using namespace std;
int normal(int arr[],int n)
{
    int res= arr[0], maxEnding=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding= max(maxEnding, maxEnding+arr[i]);
        res= max(res,maxEnding);
    }
    return res;

return 0;
}
int overall(int arr[], int n)
{
    int max_normal = normal(arr,n);
    if(max_normal<0)
    return max_normal;
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum+=arr[i];
        arr[i]= -arr[i];
        
    }
    
    int max_circular= arr_sum + normal(arr,n);
    return max(max_normal,max_circular);


return 0;
}
int main()
{
    int arr[]={2,3,4,-9,4,2,6,-435,235,-7};
    int k=overall(arr,10);
    cout<<"ans:"<<k;

return 0;
}
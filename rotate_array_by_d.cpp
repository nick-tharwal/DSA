#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low] , arr[high]);
        low++;
        high--;
    }
}
void leftrotate(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }

    
}
int main()
{
    int d=0;
    int arr[]={1,3,5,7,5,3,4,6,6,4,3,5};
    cout<<"Enter your no";
    cin>>d;
    leftrotate(arr,12,d);
    // printf(arr);
    return 0;
}
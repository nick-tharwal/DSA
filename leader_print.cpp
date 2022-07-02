#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
void print_leader(int arr[],int n)
{
    int cur_ldr=arr[n-1];
    cout<<cur_ldr<<endl;
    for(int i=n-2;i>=0;i--)
    {
        if(cur_ldr<arr[i])
        {
            cout<<arr[i]<<endl;
            cur_ldr=arr[i];
        }
        
    }
}
int main()
{
    
   int d=0;
    int arr[]={1,3,5,7,5,3,4,6,6,4,3,5};
    // cout<<"Enter your no";
    // cin>>d;
    print_leader(arr,12);
    // printf(arr);
    return 0;
}
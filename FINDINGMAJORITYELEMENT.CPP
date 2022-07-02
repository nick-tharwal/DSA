#include<bits\stdc++.h>
using namespace std;
int majority(int arr[],int n)
{
    int res=0,count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
        count++;
        else
        count++;

        if(count==0)
        {
            res=i;
            count=1;
        }

    }


    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
        count++;
    }
    if(count<=n/2)
    res=-1;
    return res;//returns index of the number
   

return 0;
}

int main()
{
    int arr[]={2,3,2,-9,2,2,6,2,235,2};
    int k=majority(arr,10);
    cout<<"ans:"<<k;

return 0;
}
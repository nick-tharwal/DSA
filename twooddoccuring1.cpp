#include <iostream>
#include <stdio.h>
using namespace std;
int oddr(int ar[], int n = 8)
{
    int XOR = 0, res1 = 0, res2 = 0;

    for (int i = 0; i < n; i++)
        XOR = XOR ^ ar[i];
    // cout << "xor" << XOR;

    int sn = (XOR & (~(XOR - 1)));// very important part of algorithm
       cout << "erer" << sn;.

    for (int i = 0; i <n; i++)
    {
        if ((ar[i] & sn)!=0)
            res1 = res1 ^ ar[i];
        else
            res2 = res2 ^ ar[i];
    }
    

    printf("Two odd occuring no are %d and %d", res1, res2);

}
int main()
{

    int ar[8] = {2, 2, 4, 5, 4, 3, 2, 2};

    oddr(ar, 8);
    return 0;


}
#include <iostream>
#include <stdio.h>
using namespace std;
int table[256];
int tbs()
{
    table[0] = 0;
     for (int i = 1; i < 256; i++)
        table[i] = (i & 1) + table[i / 2];
}

int countbit(int n)
{

    int res = table[n&0xff];
    n = n >> 8;
    res = res + table[n&0xff];
    n = n >> 8;
    res = res + table[n&0xff];
    n = n >> 8;
    res = res + table[n&0xff];

    return res;
}
int main()
{
    int a;
    tbs();
    cout << "Enter your no";
    cin >> a;
    int c = countbit(a);
    printf("Bits in the no %d are  %d", a, c);
    return 0;
}
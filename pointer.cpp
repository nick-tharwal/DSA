#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
void increment(int &v) {
    
        v++;
}

int main() {
    int a=3;
    
    increment(a);
    cout<<a<<endl;
    int *w=&a;
    printf("%d",&w);
    return 0;
}  
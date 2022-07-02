#include<iostream>
using namespace std;
int main()
{ 
int row;
 cin>>row;
	for(int i=0;i<row+1;i++)
	 {
	 for(int j=0;j<row-i;j++)
	    cout<<"*";
	   cout<<"\n";
}
return 0;
}


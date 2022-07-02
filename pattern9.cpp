#include<iostream>
using namespace std;
int main()
{
	int row;
	cin>>row;
for(int i=0;i<row+1;i++)
	 { for(int j=0;j<i;j++)
	    if(j<row-i)
	    cout<<" ";
	    else
		cout<<"*";
	    
	   cout<<"\n";
}
return 0;
}

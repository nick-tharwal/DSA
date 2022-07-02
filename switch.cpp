#include<iostream>
using namespace std;
int main()
{
	char button;
	
	cout<<"enter a char from a to d";
	cin>>button;
	switch(button)
	{
		case 'a': cout<<"a for apple";break;
		          
		case 'b': cout<<"b for ball"; break;
		case 'c': cout<<"c for cat";break;
		case 'd': cout<<"d for dog";break;
		default : cout<<"jyada chalak na bane";break;	}

return 0;
}


//check if even or odd using bit magic
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	if(n&1==1)
		cout<<"odd";
	else
		cout<<"even";
	return 0;
}
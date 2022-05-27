#include<iostream>
using namespace std;
int main()
{
	int unique=0;
	int arr[11]={1,1,2,2,3,4,4,5,5,6,6};

	for(int i=0;i<11;i++)
		unique= unique ^ i;
	return unique;
}
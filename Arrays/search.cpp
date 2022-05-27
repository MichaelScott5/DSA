#include<iostream>
using namespace std;
int search(int arr[],int,int);
int main()
{
	int n;
	cout<<"enter size";
	cin>>n;
	int arr[n];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x;
	cout<<"enter the element you want to search"<<endl;
	cin>>x;

	search(arr,n,x);

	return 0;
}

int search(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
			cout<<"Element at position"<<i<<" "<<arr[i]<<endl;
		
	}
	return -1;
	cout<<"element not in the array";
}
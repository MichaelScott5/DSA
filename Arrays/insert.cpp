#include<iostream>
using namespace std;
int INsert(int arr[],int,int,int,int);
int main()
{
	int n;
	cout<<"enter the size"<<endl;
	cin>>n;
	int arr[10];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int pos,x;
	cout<<"enter the position you want to insert into"<<endl;
	cin>>pos;
	cout<<"enter the element you want to insert"<<endl;
	cin>>x;

	cout<<"Before insertion"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	INsert(arr,n,10,pos,x);
	cout<<"After Insertion"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}


	return 0;
}

int INsert(int arr[],int n,int cap,int pos,int x)
{
	if(n==cap)
		cout<<"Array is full"<<endl;
	int index=pos-1;
	for(int i=n-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[index]=x;
	return (n+1);
}
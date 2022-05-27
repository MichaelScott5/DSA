#include<iostream>
using namespace std;
int Delete(int arr[],int,int);
int main()
{
	int n;
	cout<<"enter the size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x;
	cout<<"enter the element you want to delete"<<endl;
	cin>>x;

	cout<<"Before Deletion"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	Delete(arr,n,x);

	cout<<"After Deletion"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}


	return 0;
}

int Delete(int arr[],int n,int x)
{
	int i;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
			break;
		if(i==n)
			return n;
		for(int j=i;j<n-1;j++)
		{
			arr[j]=arr[j+1];
		}
	}
			return (n-1);

}
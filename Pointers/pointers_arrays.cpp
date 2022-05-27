#include<iostream>
using namespace std;
int main()
{
/*

	int arr[10]={23,122,41,67};

	cout<<"address of the first memory block"<<arr<<endl;
	cout<<arr[0]<<endl;
	cout<<"address of the first memory block"<<&arr[0]<<endl;

	cout<<*arr<<endl;
	cout<<*arr+1<<endl;
	cout<<*(arr+1)<<endl;
	cout<<*(arr) + 1<<endl;
	cout<<arr[2]<<endl;
	cout<<*(arr + 2)<<endl;
	int i=3;
	cout<<i[arr]<<endl;
*/

	int temp[10]={1,2};
	cout<<"total size of array"<<" "<<sizeof(temp)<<endl;
	cout<<"Size of 1st element value"<<" "<<sizeof(temp[0])<<endl;
	cout<<"Size of 1st element address"<<" "<<sizeof(&temp[0])<<endl;

	int *ptr = &temp[0];

	cout<<"size of ptr"<<" "<<sizeof(ptr)<<endl;
	cout<<"value size of ptr"<<" "<<sizeof(*ptr)<<endl;
	cout<<"value size of ptr"<<" "<<sizeof(&ptr)<<endl;



	return 0;
}
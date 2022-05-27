#include<iostream>
using namespace std;
int main()

{
	int num=5;

	cout<<"Address of num is"<<&num<<endl;
	cout<<"Value of num is"<<num<<endl;

	int *pt1=&num;

	cout<<"Address is"<<pt1<<endl;
	cout<<"Value is"<<*pt1<<endl;
	cout<<"Address of pointer is"<<&pt1<<endl;


	cout<<"Size of integer is"<<sizeof(num)<<endl;
	cout<<"Size of pointer is"<<sizeof(pt1)<<endl;

	// copying a pointer

	int *q=pt1;
	cout<<p<<"-"<<q<<endl;
	cout<<*p<<"-"<<*q<<endl;

	//pointer arithmatic

	int i=3;
	int *t=&i;

	*t= *t +1;
	cout<<*t<,endl;
	cout<<"before t"<<t<<endl;
	t = t+1;
	cout<<"after t"<<t <<endl;
	return 0;
}
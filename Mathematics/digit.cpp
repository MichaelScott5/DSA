#include<iostream>
using namespace std;
int countDigit(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<countDigit(n);
    return 0;
}
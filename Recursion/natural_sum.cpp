#include<iostream>
int sum(int n)
{
    if(n==0)
        return 0;
    return n+sum(n-1);

}

int main()
{
    int n;
    std::cout<<"Enter a number"<<std::endl;
    std::cin>>n;
    std::cout<<sum(n)<<std::endl;
    return 0;
}
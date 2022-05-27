#include<iostream>
int sum(int n)
{
    if(n==0)
        return;
    sum(n-1);
    std::cout<<n<<std::endl;

}

int main()
{
    int n;
    std::cout<<"Enter a number"<<std::endl;
    std::cin>>n;
    std::cout<<sum(n)<<std::endl;
    return 0;
}
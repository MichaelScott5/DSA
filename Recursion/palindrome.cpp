#include<iostream>
bool isPalin(std::string str,int start,int end)
{
    if(start>=end)
    {
        return true;
    }
    return ((str[start]==str[end]) && isPalin(str,start+1,end-1)); 
}

int main()
{
    std::string s;
    std::cout<<"Enter a string"<<std::endl;
    std::cin>>s;
    std::cout<<(isPalin(s,0,s.length()-1) ? "true" : "false")<<std::endl;
    return 0;
}
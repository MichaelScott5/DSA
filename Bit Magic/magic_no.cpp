#include<iostream>
int main()
{
	int n=6;
	int ans = 0;
	int base=5;
	while(n>0){
		int last = n &1;
		n=n>>1;
		ans = ans +(last * base);
		base=base*5;
	}
	std::cout<<"Ans is"<<" "<<ans;
	return 0;
}
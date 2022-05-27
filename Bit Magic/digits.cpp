#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n=34567;
	int b = 10;
	int ans = (int)(log(n)/log(b))+1;
	std::cout<<ans;
	return 0;
}
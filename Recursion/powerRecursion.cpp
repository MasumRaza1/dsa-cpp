#include<iostream>
using namespace std;

int pow(int m, int n)
{
	if(n==0)
	{
		return 1;
	}
	return pow(m, n-1) * m;
}
int main()
{
	int x = pow(2,2);
	cout<<x;
	return 0;
	
}

#include<iostream>
using namespace std;

void print(int n,char c[])
{
	for(int i =0; i<n; i++)
	{
		cout<<c[i];
	}
}

int main()
{
	int p[] ={1,2,3,4,5};
	char c[] = {'a','b','c'};
	int n = sizeof(p)/sizeof(p[0]);
	
	
	print(n,c);
	return 0;
}

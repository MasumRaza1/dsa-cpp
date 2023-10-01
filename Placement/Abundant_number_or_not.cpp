#include<bits/stdc++.h>
using namespace std;

int main(){

	int n = 21;
	int num = n;
	int sum = 0;
	int abundent;
	for (int i = 1; i < n; i++)
	{
		if(num % i == 0)
		{
			sum += i;
		}
	}
	if(sum > n)
	{
		abundent = sum - n;

		cout<<"This is abundent : "<<abundent;

	}
	else
		cout<<"not abundent";
  

	return 0;
}

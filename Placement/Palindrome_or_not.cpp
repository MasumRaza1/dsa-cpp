#include<bits/stdc++.h>
using namespace std;

int main(){

	int n = 161;
	int digit;
	int tem = n;
	int rev = 0;

	while(tem != 0)
	{
		digit = tem%10;
		rev = rev * 10 + digit;
		tem = tem / 10;
	}

	if(n == rev)
	{
		cout<<"This is palindrome";
	}
	else
		cout<<"This is not";


  

	return 0;
}

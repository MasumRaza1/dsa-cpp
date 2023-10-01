#include<bits/stdc++.h>
using namespace std;

int main(){

int n = 81;
int num = n;
int sum = 0;

while(num > 0)
{
	int digit = num % 10;

	sum = sum + digit;

	num = num / 10;

}  
if(n%sum ==0)
{
	cout<<"Harshad Number";
}
else
{
	cout<<"Not Harshad number";
}
return 0;
}

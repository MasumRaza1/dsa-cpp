#include<iostream>
using namespace std;

 int pow(int m , int n)
 {
 	if(n==0)
 	{
 		return 1;
	 }
	 
	 if(n%2==0)
	 {
	 	return pow(m*m,(n/2));
	 }
	 else{
	 	return m * pow(m*m,(n/2));
	 }
 }
 int main()
 {
 	int x = pow(2,3);
 	cout<<x;
 	return 0;
 }

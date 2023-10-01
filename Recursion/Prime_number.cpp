#include<iostream>
using namespace std;

int main(){
  
int n = 8;
bool prime = true;


for(int i = 2; i<n; i++)
{
	if(n%i==0)
	{
		prime = false;
		break;
	}
}

if(prime)
{
  cout<<"This is prime ";

}
else{
  cout<<"This is not prime";
}



	return 0;

}

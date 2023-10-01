#include<bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
	int flag = 1;

	if(n==0 || n==1)
	{
		flag = 0;
	}
	else{
		for(int i = 2; i<=n/2; i++)
		{
		if(n % i == 0){

			flag = 0;
			break;
		}
		
	}
	}
	
	return flag;
}


int main(){
  
  int n;
  cin>>n;
  int flag = 0;

  for (int i = 2; i <=n/2; ++i)
  {
  	if(isPrime(i)==1)
  	{
  		if (isPrime(n-i)==1)
  		{
  			cout<<n<<" "<<i<<" "<<n-i;

  			flag = 1;
  		}
  	}
  }
  if(flag ==0)
  {
  	cout<<n;
  }
	return 0;
}

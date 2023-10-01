#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int start = 1;
  int end = 200;


  while(start <= end)
  {
  	  int n = start;
  	int sum = 0;
  	for(int i = start; i<=end; i++)
  	{
  		int digit = n%10;
  		sum = sum + (digit * digit * digit);
  		n = n/10;
  	}

  	if(start == sum)
  	{
  		cout<<start<<endl;
  		
  	}

 start++; 

  }

	return 0;
}

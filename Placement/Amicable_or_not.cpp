#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int a = 220;
  int b = 284;
  int sumA = 0;
  int sumB = 0;

  for(int i = 1; i<=a-1; i++)
  {
  	if(a%i == 0)
  	{
  		sumA += i;
  		
  	}
  }
  cout<<sumA<<endl;
   for(int i = 1; i<=a-1; i++)
  {
  	if(b%i == 0)
  	{
  		sumB += i;
  		
  	}
  }
  cout<<sumB<<endl;

  if(sumA == b && sumB == a)
  {
  	cout<<"Amicable number";
  }
  else
  {
  	cout<<"Not Amicable number";
  }


	return 0;
}

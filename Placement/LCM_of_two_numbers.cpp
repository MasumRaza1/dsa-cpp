#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int a = 2;
  int b = 7;
  

  for(int i = a; i<= a*b; i++)
  {
  	if(i%a == 0  && i%b==0)
  	{
  		cout<<i;

  		break;
  	}
  }

	return 0;
}

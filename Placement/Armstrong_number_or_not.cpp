#include<bits/stdc++.h>
using namespace std;

int main(){
  int n = 153;
  int digit;
  int tem = n;
  int sum = 0;

  while(tem != 0)
  {
  	digit = tem % 10;
  	sum = sum + (digit * digit * digit);

  	tem = tem / 10;

  }
  if(n == sum)
  {
  	cout<<"This Armstrong";
  }
  else
  	cout<<"This is not Armstrong";


	return 0;
}

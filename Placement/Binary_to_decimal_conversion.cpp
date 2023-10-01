#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int binary = 101;
  int decimal = 0;
  int base = 1;

  while(binary != 0)
  {
  	int digit = binary % 10;
  	decimal = decimal + digit * base;
  	base = base * 2;

  	binary = binary / 10;
  }

  cout<<decimal;

	return 0;
}

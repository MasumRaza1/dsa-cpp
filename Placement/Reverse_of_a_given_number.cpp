#include<bits/stdc++.h>
using namespace std;

int main(){
  int n = 987;
  int rev = 0;
  int digit;

  while(n !=0)
  {
  	digit = n%10;

  	rev= rev * 10 + digit;
    
    n= n/10;

  }
  cout<<rev;

	return 0;
}

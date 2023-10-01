#include<bits/stdc++.h>
using namespace std;

int main(){
  int a = 0;
  int b = 1;
  int next = 0;

  for (int i = 0; i < 10 ; i++)
  {
  	next = a + b;
  	a = b;
  	b = next;
  }
    	cout<<a<<endl;

	return 0;
}

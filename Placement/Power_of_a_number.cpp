#include<bits/stdc++.h>
using namespace std;

int main(){
  int a = 2;
  int b = 5;
  int res=1;

  cout<<pow(a,b)<<endl;;

  for(int i = 1; i<=b; i++)
  {
  	res = res * a;
  }
  cout<<res;

	return 0;
}

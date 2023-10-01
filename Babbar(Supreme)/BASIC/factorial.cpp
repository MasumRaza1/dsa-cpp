#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cin>>n;
  int fact = 1;

  for(int i = 1; i<=n; i++){
  	fact *=i;
  }
  

  // while(n>=1){
  //     fact *=n;
  //     n--;
  // }
  cout<<fact;

	return 0;
}

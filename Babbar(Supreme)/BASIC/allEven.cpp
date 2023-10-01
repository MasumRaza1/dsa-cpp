#include<iostream>
using namespace std;

bool isEven(int n){
		if(n%2 == 0){
			return true;
		}

	return false;
}

int main(){
  int n;
  cin>>n;

  for(int i = 1; i<=n; i++){
  	if(isEven(i)){
  		cout<<i<<" ";
  	}
  }

	return 0;
}

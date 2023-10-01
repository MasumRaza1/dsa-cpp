#include<iostream>
using namespace std;

bool isPrime(int n){
	for(int i = 2; i<n-1; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
  
  int n;
  cin>>n;
  int count = 0;

   for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            count++;
        }
    }
     cout<<endl;
     cout<<count;

	return 0;
}

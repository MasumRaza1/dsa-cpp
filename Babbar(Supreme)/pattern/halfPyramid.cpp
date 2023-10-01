#include<bits/stdc++.h>
using namespace std;

int main(){

	for(int i = 0; i<5; i++){
		for(int j = 0; j <= i ; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<endl;

	for(int i = 0; i<5; i++){
		for(int j = 0; j < 5-i  ; j++){
			cout<<"* ";
		}
		cout<<endl;
	}

	cout<<endl;

 int count = 0;
	for(int i = 0; i<5; i++){
		for(int j = 0; j <= i ; j++){
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
cout<<endl;
	for(int i = 1; i<=5; i++){
		for(int j = 1; j <= i ; j++){
			cout<<j<<" ";
			count++;
		}
		cout<<endl;
	}
cout<<endl;
	for(int i = 1; i<=5; i++){
		for(int j = 1; j <= i ; j++){
			cout<<i<<" ";
			
		}
		cout<<endl;
	}
	cout<<endl;

	for(int i = 1; i<=5; i++){
		for(int j = 1; j <=5-i+1 ; j++){
			cout<<j<<" ";
			
		}
		cout<<endl;
	}
	cout<<endl;

	
  

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	// for(int i = 0; i<n; i++){
	// 	//space
	// 	for(int j = 0; j<n-i-1; j++){
	// 		cout<<" ";
	// 	}
	// 	//start
	// 	for(int j = 0; j<i+1; j++){
	// 		if(j==0 || j== i-1+1){
	// 			cout<<"* ";
	// 		}else{
	// 			cout<<" ";
	// 		}
			
	// 	}
	// 	cout<<endl;
	// }

	// for(int i = 0; i<n; i++){
	// 	//space
	// 	for(int j = 0; j<i; j++){
	// 		cout<<" ";
	// 	}
	// 	//star
	// 	for(int j = 0; j<n-i; j++){
	// 		cout<<"* ";
	// 	}
    //      cout<<endl;
	// }
  
//   for(int i =0; i<n; i++){
//   	//inverted hal pyramid
//   	for(int j = 0; j<n-i; j++){
//   		cout<<"*";
//   	}
//   	//hollow full pyramid
//   	for(int j =0; j<2*i+1; j++){
//   		cout<<" ";
//   	}
//   	// intverted half pyramid
//   	for(int j = 0; j<n-i; j++){
//   		cout<<"*";
//   	}
//   	cout<<endl;
//   }

//   for(int i =0; i<n; i++){
//   	//inverted hal pyramid
//   	for(int j = 0; j<i+1; j++){
//   		cout<<"*";
//   	}
//   	//hollow full pyramid
//   	for(int j =0; j<2*n-2*i-1; j++){
//   		cout<<" ";
//   	}
//   	// intverted half pyramid
//   	for(int j = 0; j<i+1; j++){
//   		cout<<"*";
//   	}
//   	cout<<endl;
//   }
	char a = 'A';
	for(int i =0; i<=n; i++){
		for(int j = 0; j<i; j++){
			cout<<a;
			a++;
		}
		cout<<endl;
	}

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
  for(int row = 0; row<4; row++){
  	for(int col = 0; col<4; col++){
  		if(row == 0 || row == 4-1 || col == 0 || col == 4-1){
  			cout<<"* ";
  		}
  		else{
  			cout<<"  ";
  		}
  	}

  	cout<<endl;
  }

	return 0;
}

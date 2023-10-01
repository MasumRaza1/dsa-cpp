
#include<iostream>
using namespace std;

int main(){
  int arr[] = {1,1,0,0,1,0,0,1,0,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  int count1 = 0;
  int count2 = 0;

  for(int i = 0; i<n; i++){
  	if(arr[i]==1){
  		count1++;
  	}
  	if(arr[i]==0){
  		count2++;
  	}
  }
  cout<<count1<<endl;
  cout<<count2;

	return 0;
}


	
	

	
  


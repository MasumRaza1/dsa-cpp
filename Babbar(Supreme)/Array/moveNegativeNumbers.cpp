#include<bits/stdc++.h>
using namespace std;


int main(){
  int arr[] = {5,6,-3,2,-1,-8,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  int s=0;
  int e=n-1;
  while(s<=e){
  	if(arr[s]>0){
  		swap(arr[s],arr[e]);
  		e--;
  	}else{
  		s++;
  		
  	}
  }
  for(int i =0; i<n; i++){
  	cout<<arr[i]<<" ";
  }

	return 0;
}

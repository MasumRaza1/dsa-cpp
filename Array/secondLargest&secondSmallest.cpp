#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {2,3,7,8,1,9,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  int smallest = INT_MAX;
  int largest = INT_MIN;
  int secondSmallest = INT_MAX;
  int secondLargest = INT_MIN;


  for(int i = 0; i<n; i++){
  	if(arr[i] < smallest){
          secondSmallest = smallest;
          smallest = arr[i];
  	}else if(arr[i] < secondSmallest && arr[i] != smallest){
  		secondSmallest = arr[i];
  	}

  	if(arr[i] > largest){
  		secondLargest = largest;
  		largest = arr[i];
  	}else if(arr[i] > secondLargest && arr[i] != largest){
  		secondLargest = arr[i];
  }
}
  cout<<secondSmallest<<endl;
  cout<<secondLargest<<endl;

	return 0;
}

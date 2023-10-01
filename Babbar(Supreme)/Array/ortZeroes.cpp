#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,0,1,0,0,1,0,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	int low = 0;
	int high = n-1;

	while(low <= high){
	 
	 if(arr[low] == 0){
	 	low++;
	 }
	 else if(arr[high] == 1){
	 	high--;
	 }
	 else{
	 	swap(arr[low], arr[high]);
	 	low++;
	 	high--;
	 }
}

	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
  

	return 0;
}

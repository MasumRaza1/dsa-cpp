#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,-2,4,1,-9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = n-1;

	for(int i = 0; i<n; i++){
		if(arr[left] > 0){
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;

			right--;
		}
		else{
           left++;
		}
	}

	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
  

	return 0;
}

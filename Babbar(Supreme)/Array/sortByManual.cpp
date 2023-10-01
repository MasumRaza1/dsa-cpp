#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);
	int low = 0;
	int high = n-1;

	while(low < high){
		if(arr[low] > arr[high]){
			int temp= arr[low];
			arr[low] = arr[high];
			arr[high] = temp;
		}
		low++;

		high--;
	}
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}

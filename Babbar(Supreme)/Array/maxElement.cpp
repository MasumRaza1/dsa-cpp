#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {2,5,3,6,3,9,7,13};
	int n = sizeof(arr)/sizeof(arr[0]);
	int maxi = INT_MIN;
	int ans ;
	for(int i = 0; i<n; i++){
		if(arr[i]>maxi){
             maxi= arr[i];
		}
	}
	cout<<maxi;
  

	return 0;
}

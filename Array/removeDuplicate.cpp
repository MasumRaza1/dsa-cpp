#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {2,2,2,3,4,4,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	// int j = 0;
	// for(int i = 1; i<n; i++){
	// 	if(arr[i] != arr[j]){
	// 		j++;
	// 		arr[j] = arr[i];
	// 	}
	// }
    //    int size = j+1;
    //    for(int i = 0; i<size; i++){
    //    	cout<<arr[i]<<" ";
    //    }
    set<int> removeDuplicates;
    for(int i = 0; i<n; i++){
    	removeDuplicates.insert(arr[i]);
    }
     for(auto i : removeDuplicates){
     	cout<<i<<" ";
     }    
  
	return 0;
}

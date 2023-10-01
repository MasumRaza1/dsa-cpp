#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr ={10,20,30,40,50,20};
	int n = arr.size();
	// int sum = 80;
	// for(int i = 0; i<arr.size(); i++){
	// 	for(int j = i+1; j<arr.size(); j++){
	// 		for(int k = j+1; k<arr.size(); k++){
    //             for(int p = k+1; p<arr.size(); p++){
	// 			if(arr[i]+arr[j]+arr[k]+arr[p]==sum){
	// 				cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<","<<arr[p]<<endl;
	// 			}
    //         }
	// 		}
	// 	}
	// }

	int start = 0;
	int end = n-1;
	int sum = 0;
	int target = 80;
     sort(arr.begin(), arr.end());
	while(start <= end){
		sum = arr[start] + arr[end];
		if(sum == target){
			cout<<arr[start]<<" "<<arr[end]<<endl;
            start++;
            end--;
		}else if(sum>target){
			end--;
		}else if(sum < target){
			start++;
		}

	}
  

	return 0;
}

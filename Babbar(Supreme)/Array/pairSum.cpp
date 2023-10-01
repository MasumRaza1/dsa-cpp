#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>arr={1,3,4,5,6};
	int target = 9;
	int sum = 0;
	for(int i = 0; i<arr.size(); i++){
		for(int j = i+1; j<arr.size(); j++){
			// cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
			sum = arr[i]+arr[j];
			if(sum == target){
				cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
			}
		}
	}
  

	return 0;
}

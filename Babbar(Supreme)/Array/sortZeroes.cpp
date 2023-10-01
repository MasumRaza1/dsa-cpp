#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>arr={0,1,0,0,1,0,1,0};
	int n = arr.size();
	int l = 0;
	int h = n-1;

	while(l<h){
		if(arr[l]==0){
			l++;
		}else if(arr[h]==1){
			h--;
		}else{
			swap(arr[l],arr[h]);
			l++;
			h--;
		}
	}

	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
  

	return 0;
}

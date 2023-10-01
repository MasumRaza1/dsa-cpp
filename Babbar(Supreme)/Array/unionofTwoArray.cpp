#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {1,2,3,3,3};
  int brr[] = {2,4,3,3};


  // vector<int>ans;
  set<int>ans;

  for(int i = 0; i<5; i++){
  	ans.insert(arr[i]);
  }
  for(int i = 0; i<4; i++){
  	ans.insert(brr[i]);
  }
 for(auto i : ans){
 	cout<<i<<" ";
 }


	return 0;
}

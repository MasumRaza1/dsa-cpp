#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {1,3,4,5,6,3,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  unordered_map<int,int> elementCount;

  for(int i = 0; i<n; i++){
        elementCount[arr[i]]++;
  }
  for(auto i : elementCount){
  	cout << "Element " << i.first << " occurs " << i.second << " times." << endl;
  }

	return 0;
}

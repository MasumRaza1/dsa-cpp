#include<bits/stdc++.h>
using namespace std;

int main(){

	int arr[] = {1,2,3};
	// for(auto i : arr)
	// {
	// 	cout<<arr[i];
	// }
	int n = sizeof(arr);
      arr[n-1] +=1;
    vector<int> ans;
	for(int i = 0; i<n; i++)
	{
		ans.push_back(arr[i]);	
		
	}
	


  

	return 0;
}

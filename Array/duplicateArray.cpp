#include<bits/stdc++.h>
using namespace std;

int main(){

	int arr[] ={2,1,3,4,2,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	int ans;
	int cnt = 1;

     int dup[size];
	
	for(int i = 0; i<size; i++)
	{
		for(int j = i+1; j<size; j++)
		{
			if(arr[i]==arr[j])
			{
				cout<<arr[i]<<" ";
			}
		}
	}

   // int ans = 0;
   //  for(int i = 0; i<arr.size(); i++){
   //      ans = ans^arr[i];
   //  }
   //   for(int i = 1; i<arr.size(); i++){
   //      ans = ans^i;
   //  }
// 	return ans;
  

	return 0;
}

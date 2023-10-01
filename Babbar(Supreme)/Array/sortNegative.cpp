#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {23,-7,12,-10,-11,40,60, 0};
  int n = sizeof(arr)/sizeof(arr[0]);
  int l = 0;
  int h = n-1;

  while(l <= h){
      if(arr[l]< 0){
      	l++;
      }
      else if(arr[h]>=0){
            h--;
      }else{
      	swap(arr[l], arr[h]);
      	l++;
      	h--;
      }
  }

  for(int i = 0; i<n; i++){
  	cout<<arr[i]<<" ";
  }

	return 0;
}

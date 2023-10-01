#include<bits/stdc++.h>
using namespace std;

int findPrivot(int arr[], int n){
      int s = 0;
      int e = n-1;
      while(s<=e){
      	int mid = s+(e-s)/2;
      	// single element
      	if(s==e) return s;

      	if(mid <= n-1 && arr[mid]>arr[mid+1]){
             return mid;
      	}
      	else if(mid > 0 && arr[mid]<arr[mid-1]){
      		return mid-1;
      	}
      	else if(arr[s]>arr[mid]){
              e = mid -1;
      	}else {
      		s= mid+1;
      	}
      	
      }
      return -1;
  }



int main(){

   // int arr[] {10,20,60,2,4,5,6};
	int arr[]={1,3};
   int n = sizeof(arr)/sizeof(arr[0]);

   int ans = findPrivot(arr,n);
   cout<<"Privot index at : "<<ans<<endl;

  

	return 0;
}

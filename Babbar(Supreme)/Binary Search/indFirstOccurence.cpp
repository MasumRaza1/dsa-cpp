#include<bits/stdc++.h>
using namespace std;

int findFirstOccurrence(int arr[], int n, int target){
	int start = 0;
	int end = n-1;
	int ans = -1;
	int mid = (start+end)/2;

	while(start <= end){
		if(arr[mid] == target){
			// Store the index in ans
			ans = mid;
			// Move to the left side
			end = mid - 1;
		}else if(arr[mid] < target){
			start = mid + 1;
		}else if(arr[mid] > target){
			end = mid - 1;
		}
		mid = (start+end)/2;
	}
	return ans;
}

int lastOccurence(int arr[], int n, int target){
	int start = 0;
	int end = n-1;
	int ans = -1;
	int mid = start + (end - start)/2;
		while(start <= end){
		if(arr[mid] == target){
			// Store the index in ans
			ans = mid;
			// Move to the right side
			start = mid + 1;
		}else if(arr[mid] < target){
			start = mid + 1;
		}else if(arr[mid] > target){
			end = mid - 1;
		}
		mid = (start+end)/2;
	}
	return ans;
}

int totalOcurrencein(int arr[], int n, int target){
	int firstOccur = findFirstOccurrence(arr, n, target);
	int lastOccur = lastOccurence(arr, n, target);

	int totalOccur = lastOccur - firstOccur + 1;

	return totalOccur;
}

int missingEleme



int main(){
  
  int arr[] = {10,20,30,30,30,30,40,50};
  int n = sizeof(arr)/sizeof(arr[0]);
  int target = 30;

  int atIndex= findFirstOccurrence(arr, n, target);

  if(atIndex == -1){
  	cout<<"Element not found "<<endl;
  }
  else{
  	cout<<"Element found at index: " <<atIndex<<endl;
  }

  int atIndexi= lastOccurence(arr, n, target);

  if(atIndexi == -1){
  	cout<<"Element not found "<<endl;
  }
  else{
  	cout<<"Element found at index: " <<atIndexi<<endl;
  }

  int totalans = totalOcurrencein(arr,n,target);
  cout<<totalans<<endl;



	return 0;
}

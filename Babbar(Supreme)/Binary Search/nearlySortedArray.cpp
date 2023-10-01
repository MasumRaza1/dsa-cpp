#include<bits/stdc++.h>
using namespace std;


int searchNearlyIndex(int arr[], int n, int target){
	int s= 0;
	int e = n-1;
	while(s<=e){
		int mid= s+(e-s)/2;

		if(mid-1>=0 && arr[mid-1]==target){
			return mid-1;
		}
		if(arr[mid]==target){
			return mid;
		}
		if(arr[mid+1]==target){
			return mid+1;
		}
		else if(arr[mid]<target){
             s= mid+2;
		}else{
			e= mid-2;
		}

	}
	return -1;
}

int main(){
  
  int arr[] = {20,10,30,50,40,70,60};
  int n= 7;
  int target = 60;

  int found = searchNearlyIndex(arr,n,target);


  if(found == -1){
  	cout<<"Not found : "<<endl;
  }else{
  	cout<<"Found : "<<found<<endl;
  }
 

	return 0;
}


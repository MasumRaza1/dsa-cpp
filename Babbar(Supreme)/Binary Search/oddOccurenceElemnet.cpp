#include<bits/stdc++.h>
using namespace std;

int findOddOccurence(int arr[], int n){
     int s = 0;
     int e = n-1;
     while(s<=e){
     	int mid = s+(e-s)/2;
     	// single element
     	if(s==e) return s;

     	// check even or Odd of mid
     	if(mid&1){
     		//odd
     		if(mid-1 >= 0 && arr[mid]==arr[mid-1]){
     			//right me jao
     			s=mid+1;
     		}else{
     			// left me jao
     			e=mid-1;
     		}
     	}
     	else{
     		//even
     		if(mid+1 < n && arr[mid]==arr[mid+1]){
     			// right me jao
     			s=mid+2;
     		}else{
     			// ya to main ans pr khada hu
     			// ya to main right me khada hu
     			e=mid;
     		}
     	}
     }
     return -1;
}

int main(){
	int arr[] = {10,10,2,2,5,5,2,2,5,5,20,20,1,11,11,10,10};
	int n = sizeof(arr)/sizeof(arr[0]);

	int oddOccurenceElement = findOddOccurence(arr,n);
	cout<<arr[oddOccurenceElement]<<endl;
  

	return 0;
}

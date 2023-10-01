#include<bits/stdc++.h>
using namespace std;

int rotatedSortedArray(int arr[], int n)
{	int start = 0;
   	int end = n - 1;

   	while(start <= end)
	{
		int mid = start + (end - start) / 2;
		int next = (mid+1) % n;
		int rev = (mid + n - 1) % n;

		if(arr[mid] <=arr[next] && arr[mid] <=arr[rev])
		{
			return mid;
		}
	     if(arr[start] <=arr[mid])
		{
			start = mid + 1;
		}

		else if(arr[mid] <=arr[end]) {

			return mid - 1;
		}
		
	}

}

int main(){
   int arr[] = {11,12,15,18,2,5,6,8};
  int n = sizeof(arr) / sizeof(arr[0]);

      int first = rotatedSortedArray(arr,n);
  	  cout<<first<<" ";

    

	return 0;
}

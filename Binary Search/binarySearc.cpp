#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
	// int size = sizeof(arr)/sizeof(arr[0]);
	int start = 0;
	int end = size-1;
	int mid = (start + end)/2;

	for (int i = 0; i < size; i++)
	{
		if(key == arr[mid])
			return mid;

		if(key > arr[mid])
		{
			start = mid + 1;
		}

		else{
			end = mid -1;
		}

		mid = (start + end) / 2;
	}

	return -1;

}

int main(){

  int arr[7] = {1,2,3,4,5,6,7};

  int index  = binarySearch(arr, 7, 6);

  cout<<" present in index : "<<index;

	return 0;
}

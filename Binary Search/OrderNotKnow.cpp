#include<bits/stdc++.h>
using namespace std;

int acs(int arr[], int n, int target)
{
	int start = 0;
	int end = n-1;

	while(start <= end)
	{
		int mid = start + (end - start) / 2;
		if(target == arr[mid])
		{
			return mid;
		}
		else if(target > arr[mid])
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;

		}
	}
}

int decs(int arr[], int n, int target)
{
	int start = 0;
	int end = n-1;

	while(start <= end)
	{
		int mid = start + (end - start) / 2;
		if(target == arr[mid])
		{
			return mid;
		}
		else if(target < arr[mid])
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;

		}
	}
}

int main(){
  
  // int arr[] = {1,2,3,4,5,6};
  int arr[] = {7,6,5,4,3,2,1};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target;
  cin>>target;
if(arr[0] < arr[1])
{
	 int index = acs(arr,n,target);
  	  cout<<index;
}
else
{
	int index = decs(arr,n,target);
  	  cout<<index;
}
 

	return 0;
}

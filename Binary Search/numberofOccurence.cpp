#include<bits/stdc++.h>
using namespace std;

int firstOccurence (int arr[], int n, int target)
{
	int start = 0;
	int end = n - 1;
	int result = -1;

	while(start <= end)
	{
		int mid = start + (end - start) / 2;

		if(target == arr[mid])
		{
		    result = mid;
			end = mid - 1;
		}
		else if(target < arr[mid])
		{
			end =  end - 1;

		}
		else
		{
			start = mid + 1;
		}
	}
	return result;

}

int lastOccurence (int arr[], int n, int target)
{
	int start = 0;
	int end = n - 1;
	int result = -1;

	while(start <= end)
	{
		int mid = start + (end - start) / 2;

		if(target == arr[mid])
		{
		    result = mid;
			start = mid + 1;		}
		else if(target < arr[mid])
		{
			end =  end - 1;

		}
		else
		{
			start = mid + 1;
		}
	}
	return result;

}


int main(){

  int arr[] = {2,4,10,10,10,10,18,20};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 10;

      int first = firstOccurence(arr,n,target);
  	  cout<<first<<" ";

  	  int last = lastOccurence(arr,n,target);
  	  cout<<last<<endl;

     
     cout<<last - first + 1;
  

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
	int start = 0;
	int end = n-1;
	int mid = start + (end - start)/2;
    int ans;
	while(start <= end)
	{
		if(key == arr[mid])
		{
			 ans = mid;
			end = mid -1;
		}
		 if(key < arr[mid])
		{
			end = mid -1;
		}
		 if(key > arr[mid])
		{
			start = mid + 1;
		}

		mid = start + (end - start)/2;
	}

	return ans;
}

int secondOccurence(int arr[], int n, int key)
{
	int start = 0;
	int end = n-1;
	int mid = start + (end - start)/2;
    int ans;
	while(start <= end)
	{
		if(key == arr[mid])
		{
			 ans = mid;
			start = mid + 1;
		}
		 if(key < arr[mid])
		{
			end = mid -1;
		}
		 if(key > arr[mid])
		{
			start = mid + 1;
		}

		mid = start + (end - start)/2;
	}

	return ans;

}
int main(){
  
  int arr[6] = {1,2,3,3,3,5};

  pair<int ,int> p;
  p.first = firstOccurence(arr, 6, 3);
  p.second = secondOccurence(arr, 6, 3);


  int totalOcurrence = (p.second - p.first) + 1;

  cout<<" this is p : "<<p.first<<" "<<p.second<<endl;;
  cout<<" total number of occurence : "<<totalOcurrence;
	return 0;
}

#include<iostream>
using namespace std;

int pivot(int arr[], int n)
{
	int s = 0;
	int e = n-1;
	

	while(s < e)
	{
		int mid = s + (e-s) /2;

		if(arr[mid] > arr[n-1])
		{
			s = mid + 1;
		}
		else
			e=mid;
	}
	return s;
}

int main(){
  
  int arr[5] = {3,8,10,17,11};
  int pivotIndex= pivot(arr, 5);
  cout<<"Pivot at index : "<<pivotIndex+1;

	return 0;
}


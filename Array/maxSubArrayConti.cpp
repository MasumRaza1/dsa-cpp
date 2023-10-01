#include<bits/stdc++.h>
using namespace std;

int maxSubArray(int arr[], int n)
{
	int maxSum = INT_MIN;
	int curSum = 0;
	int curSum = arr[0];

	for(int i = 0; i<n; i++)
	{
		curSum = curSum + arr[i];

		if(curSum>maxSum)
		{
			maxSum = curSum;
		}
		else if(curSum<0)
		{
			curSum = 0;
		}

	}

	return maxSum;

}
void print(int arr[], int n)
{
    int maxSum = maxSubArray(arr, n);
     cout << "Maximum subarray sum: " << maxSum << endl;
}

int main(){

     int arr[] ={1, 2, 3, -2, 5};
     int n = sizeof(arr)/sizeof(arr[0]);
     
     maxSubArray(arr, n);
     print(arr,n);
  

	return 0;
}

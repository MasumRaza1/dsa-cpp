#include<iostream>
using namespace std;

void reverse(int arr[], int n){
	int start = 0;
	int end = n-1;
	
	while(start<=end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	
		for(int i = 0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int arr[5] = {4,2,4,7,3};
	int brr[6] = {4,5,8,2,9,6};
	
	reverse(brr,6);

	return 0;
}

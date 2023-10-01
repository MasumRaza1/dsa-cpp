#include<iostream>
using namespace std;

void alternateSwap(int arr[], int size)
{
	for(int i = 0; i<size; i+=2){
		if(i+1 < size)
		{
			swap(arr[i], arr[i+1]);
		}
	}
	
}
void alternateSwapN(int arr[], int size)
{
    for(int i = 0; i<size; i+=2)
    
    {
    	if(i+1<size)
    	{
    		int temp = arr[i];
    		arr[i] = arr [i+1];
    		arr[i+1] = temp;
		}
	}
	
}
void print(int arr[], int size)
{
		for(int i = 0; i<size; i++)
		{
			cout<<arr[i]<<" ";
		}
}
int main()
{
	int even[6]={1,3,2,7,11,8};
	alternateSwapN(even,6);
	print(even,6);
	
	
	return 0;
}

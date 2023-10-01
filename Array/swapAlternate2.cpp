#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {2,6,7,7,5,8,3};
      int size = 7;
	for(int i = 0; i<7; i+=2 )
	{
		if(i+1<7)
		{
//			swap(arr[i], arr[i+1]);
 			int temp = arr[i];
 			arr[i] = arr[i+1];
 			arr[i+1] = temp;
		}
	}
	
	for(int i = 0; i<size; i++)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  	int arr[] ={2,1,3,4,2,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	int ans;

	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			for (int k = j+1; k <size; k++)
			{
				cout<<i<<"j"<<j<<"k"<<k;
			}
		}
	}

	return 0;
}

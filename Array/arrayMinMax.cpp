#include<iostream>
using namespace std;

int getMax(int num[], int n)
{
	int maxi =  INT_MIN;
	for(int i = 0; i<n; i++) 
	{
		maxi = max(maxi,num[i]);
		
	
	}
		return maxi;
}
//minimum
int getMin(int num[], int n)
{
	int min =  INT_MAX;
	for(int i = 0; i<n; i++) 
	{
		if(num[i]<min)
		{
			min = num[i];
		}
		
	
	}
		return min;
}


int main()
{
	int size;
	cin>>size;
	
	int num[10];
	for(int i = 0; i<size; i++)
	{
		cin>>num[i];
	}
	
	cout<<"this is max : "<<getMax(num, size)<<endl;
	cout<<"this is min : "<<getMin(num, size)<<endl;
	
	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	int key = 2;
	bool count = false;
	int arr[] = {4,2,4,7,3};
	for(int i = 0; i<5; i++)
	{
	   if(key==arr[i])
	   {
	   	  count = true;
		}	
	}
	if(count == true)
	{
		cout<<"Yes it present in : ";
	}
	else 
	cout<<"not fount";
	return 0;
}

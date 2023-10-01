#include<iostream>
using namespace std;
       
	int fib(int arr[], int n)
	{
        if(n <= 1)
        {
            arr[n] = n;
            return n;
        }
        else if(arr[n-2]==-1)
        {
            arr[n-2] = fib(arr, n-2);
        }
        if(arr[n-1]==-1)
        {
            arr[n-1] = fib(arr, n-1);
        }

        return arr[n-2] + arr[n-1];

	}





int main(){

     int n = 10;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }
     int i = fib(arr, n);
     cout<<i;

    

	return 0;
}

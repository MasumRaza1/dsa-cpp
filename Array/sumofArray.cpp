#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,3,4,5};
	int sum = 0;
	int avg;
	int n = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0; i<n; i++){
           sum += arr[i];
	}
	avg = sum/n;
	cout<<sum<<" "<<avg;

	return 0;
}
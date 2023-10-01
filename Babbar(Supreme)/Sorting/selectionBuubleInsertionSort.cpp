#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
	for(int i = 0; i<n-2; i++){
		int mini = i;
		for(int j = i; j<n; j++){
			if(arr[j]<arr[mini]){
				swap(arr[mini], arr[j]);
			}
		}
	}

}

void bubbleSort(int arr[], int n){
	for(int i = n-1; i>=1; i--){
		// check already sorted
		  int doSwap = 0;
		for(int j = 0; j<n-1; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
				doSwap = 1;
			}
		}
		if(doSwap == 0){
			break;
		}
	}
}

void insertionSort(int arr[], int n){
     for(int i = 0; i<n; i++){
     	int j = i;
     	while(j>0 && arr[j-1]>arr[j]){
     		swap(arr[j-1], arr[j]);
     		j--;
     	}
     }  
}

void print(int arr[], int n){
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}



int main(){
    int arr[] = {19,3,7,2,19,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    // selectionSort(arr, n);
    // bubbleSort(arr,n);
    insertionSort(arr,n);
    print(arr,n);

  

	return 0;
}

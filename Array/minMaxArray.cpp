#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {2,3,5,1,9,3,10};
  int n = sizeof(arr)/sizeof(arr[0]);
  int m;
  int min = INT_MAX;
  int max = INT_MIN;

  for(int i = 0; i<n; i++){
          if(min > arr[i]){
                min = arr[i];
          }
          if( max < arr[i]){
          	max = arr[i];
          }
  }
  cout<<min<<endl;
  cout<<max; 

	return 0;
}

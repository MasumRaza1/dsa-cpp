#include<iostream>
using namespace std;

int main(){
  int arr[] = {2,4,6,2,9,4,4,4,3,4,4};
  int count = 0;
  int target = 4;
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i =0; i<n; i++){
      if(arr[i] == target){
        count++;
      }
  }
cout<<count;
  return 0;
}

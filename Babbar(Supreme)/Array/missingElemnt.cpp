#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {9,6,4,2,3,5,7,0,1};
	int n = sizeof(arr)/sizeof(arr[0]);
         int ans;
        for(int i =0; i<n; i++){
            for(int j = 0; j<n; j++){
              if(arr[i] != j){
               ans = j;
              
            }
           
            }
        }
        cout<<ans;
  

	return 0;
}

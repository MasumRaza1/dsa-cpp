#include<bits/stdc++.h>
using namespace std;



int maxElemnet(int arr[][3],int row, int col){
	int maxi = INT_MIN;
	for(int i = 0; i<row; i++){
		
		for(int j = 0; j<col; j++){
              if(arr[i][j]>maxi){
              	 maxi = arr[i][j];
              }              
		}

	}
	return maxi;

}


int minElemnet(int arr[][3],int row, int col){
	int mini = INT_MAX;
	for(int i = 0; i<row; i++){
		
		for(int j = 0; j<col; j++){
              if(arr[i][j]<mini){
              	 mini = arr[i][j];
              }              
		}

	}
	return mini;

}




int main(){
  int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

   for (int i = 0; i < 3; i++)
   {
   	  for (int j = 0; j < 3; j++)
   {
   	    cout<<arr[i][j]<<" ";
   }
   cout<<endl;
   }
    
   
      
     cout<<maxElemnet(arr,3,3);
     cout<<endl;
     cout<<minElemnet(arr,3,3);
	return 0;
}
#include<bits/stdc++.h>
using namespace std;


void transpose(int arr[][3],int row, int col, int newArray[][3]){
       for(int i =0; i<row; i++){
       	for(int j =0; j<col; j++){
       		newArray[i][j] = arr[j][i];

      }
       }


}

void print(int newArray[][3],int row, int col){
	  for(int i =0; i<row; i++){
       	for(int j =0; j<col; j++){
       		cout<<newArray[i][j]<<" ";

      }
      cout<<endl;
       }

}







int main(){
  int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

   int transposedArr[3][3];

     print(arr,3,3);
      cout<<endl;
     

     transpose(arr,3,3, transposedArr);
     print(transposedArr,3,3);
   
      
   
     	return 0;
}






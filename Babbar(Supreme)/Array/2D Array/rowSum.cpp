#include<bits/stdc++.h>
using namespace std;

void printrowSum(int arr[][3], int row, int col){
	for(int i = 0; i<row; i++){
		int sum =0;
		for(int j = 0; j<col; j++){
            sum += arr[i][j];
		}
		cout<<sum<<endl;
	}
}
void printcolSum(int arr[][3], int row, int col){
	for(int i = 0; i<row; i++){
		int sum =0;
		for(int j = 0; j<col; j++){
			
            sum += arr[j][i];

		}
		  cout<<sum<<endl;
	}
}

bool linearSearch(int arr[][3], int row, int col, int key){
	for(int i = 0; i<row; i++){
		for(int j = 0; j<col; j++){
              if(arr[i][j]==key){
              	return true;
              }              
		}

	}
	return false;
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
    
    printrowSum(arr, 3, 3);
     cout<<endl;
     printcolSum(arr, 3, 3);
     int key = 89;
     bool result = linearSearch(arr, 3, 3, key);

    if (result) {
        cout << "Key " << key << " found in the array." << endl;
    } else {
        cout << "Key " << key << " not found in the array." << endl;
    }

	return 0;
}

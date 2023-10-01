#include<iostream>
using namespace std;

int main(){
  int arr[] = {2,4,6,2,9,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  int target = 9;
  bool found;
  int index;
for(int i = 0; i<n; i++){
	if(target == arr[i]){
        found = true;
        index = i;
        break;
	}

}
	 if(found){
 	cout<<"found at : "<<index<<endl;
 }
 else{
 	cout<<"Not font"<<endl;
 }



	return 0;
}

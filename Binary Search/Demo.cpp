#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[]={2,3,10,10,10,12};
int start = 0;
int n = sizeof(arr)/sizeof(arr[0]);

int end = n-1;
int target = 10;

 for(int j = n-1; j > start; j--)
    {
      if(target == arr[j]){
        cout<<"last : "<<j<<endl;
        break;
      }
    }

for (int i = start; i < n-1 ; i++)
  {
   

    if(target == arr[i]){
        cout<<"end : "<<i;
        break;
      }


}  




	return 0;
}

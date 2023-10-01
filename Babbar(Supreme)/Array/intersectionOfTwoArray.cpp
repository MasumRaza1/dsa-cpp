#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>arr{1,2,3,3,5,6};
  vector<int>brr{3,3,10,5};

   vector<int>ans;
    
    for(int i =0; i<arr.size(); i++){
    	for(int j = 0; j<brr.size(); j++){
    		if(arr[i]==brr[j]){
    			brr[j]=-1;
    		ans.push_back(arr[i]);
    	}
    	}
    	
    }

     for(int i =0; i<ans.size(); i++){
             cout<<ans[i]<<" ";
     }

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  pair<int,int> p = {1,3};
  cout<<p.first<<" "<<p.second<<endl;

  pair<int, pair<int, int>> t = {1, {3,4}};
  cout<<t.first<<" "<<t.second.second<<" "<<t.second.first<<endl;

  pair<int, int> arr[] ={{1,2}, {2,5}, {5,1}};
  cout<<arr[1].second<<endl;
   cout<<arr[0].first<<endl;

	return 0;
}

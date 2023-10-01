#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int> v;

  v.push_back(1);
  v.emplace_back(2);
  v.push_back(7);
  v.emplace_back(6);
  v.push_back(9);
  v.emplace_back(5);

  sort(v.begin(), v.end());
  for(auto i : v)
  {
  	cout<<i<<" ";
  }
  cout<<endl;
  int a[]= {3,4,2,42,1,3,42,4};
  for(auto i: a)
  {
  	cout<<i<<" ";
  }
  cout<<endl;
  
  cout<<"After sort"<<endl;
  sort(a, a+8);

  
  for(auto i: a)
  {
  	cout<<i<<" ";
  }

  cout<<endl;
 
 pair<int, int> arr[] ={{1,2}, {2,1}, {4,1}};
 sort(arr, arr+4, greater<int>);

  

	return 0;
}

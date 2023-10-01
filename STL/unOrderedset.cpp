#include<bits/stdc++.h>
using namespace std;

//unordered set unique but not sorted
// O(1)
int main(){

  unordered_set <int>ms;
  ms.insert(1);
  ms.insert(1);
  ms.insert(2);
  ms.insert(3);
  ms.insert(2);
  ms.insert(4);
  ms.insert(3);

  for(auto i : ms)
  {
  	cout<<i<<" ";
  }
  cout<<endl; 

	return 0;
}

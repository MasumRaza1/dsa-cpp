#include<bits/stdc++.h>
using namespace std;

// mutiset sorted not uinique
int main(){
  
  multiset<int>ms;
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
 
  int cnt = ms.count(2);
  cout<<"No. of 2's occur : "<<cnt<<endl;

// it delete all 1's
  ms.erase(1); 

  // only single one earse
  ms.erase(ms.find(1));

  // ms.erase(ms.find(1), ms.find(1)+2);
 



 for(auto i : ms)
  {
  	cout<<i<<" ";
  }

	return 0;
}

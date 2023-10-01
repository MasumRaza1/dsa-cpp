#include<bits/stdc++.h>
using namespace std;

int main(){

  list<int> ls;
  ls.push_back(1);
  ls.emplace_back(2);

  ls.push_front(9);
  ls.emplace_front(7);

  cout<<ls.size()<<endl;
  ls.clear();

  ls.insert(ls.begin(), 2,5);
  ls.emplace_front(2);

  for(auto i : ls)
  {
  	cout<<i<<" "; 
  }

	return 0;
}

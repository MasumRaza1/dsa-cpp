#include<bits/stdc++.h>
using namespace std;

int main(){
  
  vector<int> v (2,100); // {100, 100}
  v.insert(v.begin(),300); //{300, 100, 100}
  v.insert(v.begin()+1, 2, 10); //300 10 10 100 100 

  vector<int> copy (2,50);
  v.insert(v.begin(), copy.begin(), copy.end()); //50 50 300 10 10 100 100

  cout<<v.size()<<endl; //7

  v.pop_back();  // last element deleted
                 // 50 50 300 10 10 100

vector<int> v1(v);
v.swap(v1);

 for(auto i : v)
 {
 	cout<<i<<" ";
 }

 v.clear();

 cout<< v.empty();

	return 0;
}

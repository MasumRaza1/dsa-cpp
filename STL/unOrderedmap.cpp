#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m){
	cout<<m.size()<<endl;

	for(auto &pr : m)
	{
		cout<<pr.first<<" "<<pr.second<<endl;
	}
}

int main(){
  unordered_map<int, string> m;
  m[1] = "abc";  // O((1))
  m[5] = "cdc";
  m[3] = "acd";
  m.insert({4,"afg"});


  print(m);
 
 // map<int ,string> :: iterator it;
 // for(it = m.begin(); it !=m.end(); ++it)
 // {
 // 	cout<< (*it).first<<" "<<(*it).second<<endl;
 // }
 // cout<<endl;
 // for(auto pr : m)
 // {
 // 	cout<<pr.first<<" "<<pr.second<<endl;
 // }


	return 0;
}

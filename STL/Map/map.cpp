#include<bits/stdc++.h>
using namespace std;

int main(){
  
  unordered_map<string, int> m;


  //Insertion
  //1
  pair<string, int> p = make_pair("masum",3);
  m.insert(p);

  //2
  pair<string, int> pair2("raza",2);
  m.insert(pair2);

  //3
  m["mera"] = 1;

  // What will happen
  // m["mera"] = 2;


// Searching
  cout<<m["mera"] <<endl;
  cout<<m.at("masum")<<endl;

cout<<m["unknownKey"]<<endl;
// cout<<m.at("unknownKey")<<endl;


//size
cout<<m.size()<<endl;


// to check present
cout<<m.count("bro")<<endl;
cout<<m.count("masum")<<endl;

// earase
m.erase("raza");
cout<<m.size()<<endl;


for(auto i : m)
{
	cout<<i.first<<" "<<i.second<<endl;
}


//iterator

unordered_map<string,int> :: iterator it = m.begin();
while(it != m.end())
{
	cout<<it->first <<" "<<it->second<<endl;
	it++;
}
     
	return 0;
}

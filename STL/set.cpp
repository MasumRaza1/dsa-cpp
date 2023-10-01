#include<bits/stdc++.h>
using namespace std;

// set 
// store in sorted and uinque
// Every things O(log n)

int main(){

	set<int> s;
	s.insert(1);
	s.emplace(2);
	s.insert(3);
	s.insert(2);
	s.insert(4);

	for(auto i : s)
	{
		cout<<i<<" ";
	}

	cout<<endl;

	int cnt = s.count(4);
	cout<<"Count : "<<cnt<<endl;


	auto it = s.find(3);

	s.erase(4); // O(log n)

	

	auto itt = s.find(3);
	s.erase(itt); // constant time  O(1);

	auto it1 = s.find(2);
	auto it2 = s.find(4);
	s.erase(it1, it2);

	for(auto i : s)
	{
		cout<<i<<" ";
	}




  

	return 0;
}

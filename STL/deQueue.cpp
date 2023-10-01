#include<bits/stdc++.h>
using namespace std;

int main(){

	deque<int> dq;
	dq.push_back(2);
	dq.emplace_back(3);

	dq.push_front(1);
	dq.emplace_front(0);

	for(auto i : dq)
	{
		cout<<i<<" ";
	}
     
     cout<<endl;
	cout<<dq.back()<<" ";
	cout<<dq.front();
     cout<<endl;


	dq.pop_front();
	dq.pop_back();


	for(auto i : dq)
	{
		cout<<i<<" ";
	}

	cout<<endl;
	cout<<dq.size()<<endl;


	iter_swap(dq.begin(),dq.begin()+1);
	for(auto i : dq)
	{
		cout<<i<<" ";
	}
  

	return 0;
}

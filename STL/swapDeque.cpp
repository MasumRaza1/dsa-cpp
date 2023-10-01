#include<bits/stdc++.h>
using namespace std;

int main(){

	deque<int> dq(2,4);
	dq.emplace_back(9);
	dq.push_front(1);

	for (int i = 0; i < dq.size(); i++)
	{
		cout<<dq[i]<<" ";
	}
	cout<<endl;

	// iter_swap(dq.begin(),dq.end());

	// for(auto i : dq)
	// {
	// 	cout<<i<<" ";
	// }

	for (int i = 0; i < dq.size(); i++)
	{
		swap(dq[i], dq[i+1]);
	}
	for(auto i : dq)
	{
		cout<<i<<" ";
	}
  

	return 0;
}

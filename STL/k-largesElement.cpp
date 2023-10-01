#include<bits/stdc++.h>
using namespace std;

int main(){

priority_queue<int>pq;
// priority_queue<int, vector<int>, greater<int>> pq;
pq.push(10);
pq.push(20);
pq.push(2);
pq.push(1);
pq.push(2);
pq.push(3);

for (int i = 0; i < 3; i++)
{
	cout<<pq.top()<<" ";
    
    pq.pop();

}

	return 0;
}

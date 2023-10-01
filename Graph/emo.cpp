#include<bits/stdc++.h>
using namespace std;

unordered_map<int, list<int>> adj;

addEdge(int u, int v, bool direction){
    adj[u].push_back(v);

    if(direction){
    	adj[v].push_back(u);
    }
}

void print(){
	for(auto i : adj){
		cout<<i.first<<"->";

		for(auto j : i.second){
			cout<<j<<",";
		}
		cout<<endl;
	}
	
}

int main(){
  addEdge(0, 1, true);
    addEdge(0, 4, true);
    addEdge(1, 2, true);
    addEdge(1, 3, true);
    addEdge(1, 4, true);
    addEdge(2, 3, true);
    addEdge(3, 4, true);

    print();

	return 0;
}

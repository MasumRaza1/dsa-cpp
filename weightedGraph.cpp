#include<bits/stdc++.h>
using namespace std;

class Graph{

	unordered_map<string, list<pair<string,int>>> adj;
public:
	void addEdge(string x, string y, bool bidirection, int wt){
		adj[x].push_back(make_pair(y,wt));

		if(bidirection){
			adj[y].push_back(make_pair(x,wt));
		}
	}

	void print(){
		for(auto i : adj){
			string city = i.first;
			list<pair<string, int>> nbrs = i.second;
			cout<<city<<"->";

			for(auto nbr: nbrs){
				string destination = nbr.first;
				int weight = nbr.second;

				cout<<destination<<","<<weight<<"  ";
			}
			cout<<endl;
		}
	}
};

int main(){

	Graph g;
	g.addEdge("A","B", true, 20);
	g.addEdge("A","C", true, 21);
	g.addEdge("B","D", false, 22);
  

  g.print();

	return 0;
}

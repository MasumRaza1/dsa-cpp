#include<bits/stdc++.h>
using namespace std;

int main(){
  
  queue<int> q;
  q.push(1);
  q.push(2);
  q.emplace(4);

 q.back() +=5;

  cout<<q.front()<<" ";
  cout<<q.back()<<" "<<endl;

  q.pop();
  cout<<q.front()<<" ";

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){

   // push : O(log n)
   // top : O(1)
   // pop : O(log n)
   
   priority_queue<int> pq;
   pq.push(5);  
   pq.push(7);  
   pq.push(9);

   cout<<pq.top()<<endl; 
   pq.pop();  
   cout<<pq.top()<<endl;

   cout<<"Max Heap"<<endl;
   while(!pq.empty())
   {
   	cout<<pq.top()<<" ";

   	pq.pop();

   }


   // Min Heap
   priority_queue<int, vector<int>, greater<int>> mpq;
   mpq.push(5);
   mpq.push(9);
   mpq.push(8);

   cout<<mpq.top()<<endl;

   cout<<"Min Heap"<<endl;
   while(!mpq.empty())
   {
   	cout<<mpq.top()<<" ";

   	mpq.pop();

   }

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  stack<int> st;
  st.push(1);
  st.push(2);
  st.emplace(3);

  cout<<st.top()<<endl;
  cout<<st.size()<<endl;
  cout<<st.empty()<<endl;



while (!st.empty()){
      cout<<st.top()<<" ";
      st.pop();
   }
   cout<<endl;
   cout<<st.empty();



	return 0;
}

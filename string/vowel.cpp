#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  int n = s.size();
    int count = 0;
  vector<char>ch;

  for(int i = 0; i<n; i++){
  	if(s[i] =='a' || s[i]== 'e' || s[i] =='i' || s[i]== 'o'  || s[i] =='u' ||  s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
  		ch.push_back(s[i]);
  		count++;
  	}
  }
  for(int i = 0; i<ch.size(); i++){

     cout<<ch[i]<<" ";

  }
  cout<<endl;
  cout<<count;

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(string s){
	int left = 0;
	int right = s.size()-1;

	while(left < right){
       if(s[left] != s[right]){
       	return false;
       }
       left++;
       right--;
	}
	return true;
}

int main(){
  string s;
  cin>>s;
  cout<<isPalindrom(s);

	return 0;
}

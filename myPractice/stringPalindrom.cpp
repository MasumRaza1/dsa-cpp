#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(string s){
	int n = s.size();
	int left = 0;
	int right = n-1;
   

   while(left < right){
   	if(s[left] != s[right]){
   		return false;
   	}
   	else{
   		return true;
   	}
   	left++;
   	right--;
   }


}

int main(){
  string s;
  cin>>s;
bool ans = isPalindrom(s);
cout<<ans;

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

void reverseString(char ch[], int n){
      int start = 0;
      int end = n-1;
      while(start<=end){
      	swap(ch[start], ch[end]);
      	start++;
      	end--;
      }
}
void toUpperCase(char ch[], int n){
	int index = 0;
	while(ch[index] != '\0'){
		char currIndex = ch[index];
		if(currIndex>='a' && currIndex<='z'){
			ch[index] = currIndex - 'a' + 'A';
		}
		index++;
	}
}

void toLowerCase(char ch[], int n){
	int index = 0;
	while(ch[index] != '\0'){
		char currIndex = ch[index];
		if(currIndex>='A' && currIndex<='Z'){
			ch[index] = currIndex - 'A' + 'a';
		}
		index++;
	}
}

void resplace(char ch[], int n){
	for(int i = 0; i<n; i++){
		if(ch[i]=='@'){
			ch[i] = ' ';
		}
	}
}

bool checkPalindrome(char ch[], int n){
	int s=0;
	int e=n-1;
	while(s<=e){
		if(ch[s]!=ch[e]){
			return false;
		} 
		s++;
		e--;
	}
	
	return true;
}

int main(){
	char ch[100];
	cin.getline(ch,100);
	
	cout<<"Before : "<<ch<<endl;
	 int n = strlen(ch);
      // reverseString(ch,n);
	 // toUpperCase(ch,n);
	 // toLowerCase(ch,n);
	 // resplace(ch,n);
	 bool ans = checkPalindrome(ch,n);
	 cout<<ans;

	cout<<"after : "<<ch<<endl;


	return 0;
}

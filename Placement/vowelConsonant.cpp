#include<bits/stdc++.h>
using namespace std;

int main(){

	string s = "Thisisdog";

	for(int i = 0; i<s.length(); i++)
	{
		if(s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u')
		{
			cout<<"This is vowel";
		}
		else{
			cout<<"Consonant";
		}

		break;
	}

return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n = 555;
  // string s = to_string(n);
  // cout<<s.length();

    if (n == 0)
        return 1;
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    cout<<count;


	return 0;
}

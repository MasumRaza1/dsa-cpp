#include <iostream>
#include<vector>
using namespace std;

int main() {
    string s;
    cin>>s;
    int count = 0;
    
    vector<char>ans;
    
    for(int i = 0; i<s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            ans.push_back(s[i]);
            count++;
        }
    }

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i];
    }
    cout<<count;

    return 0;
}
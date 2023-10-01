#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<string> ans;
    string s[]={"Dog","Cat","Dog","Cat"};
  int size = sizeof(s)/sizeof(s[0]);

  
  for(int i = 0; i<size; i++)
  {
    for(int j = i+1; j<size; j++)
    {
      if(s[i]==s[j])
      {
        ans.push_back(s[i]);
    
      }
    }
     cout<<ans[i]<<" ";
  }


  // O(n)

   // unordered_map<string, int> mp;
   //  string s[] = {"Dog", "Cat", "Dog"};
   //  int size = sizeof(s) / sizeof(s[0]);

   //  for (int i = 0; i < size; i++) {
   //      mp[s[i]]++; // increment count for string s[i]
   //  }

   //  for (auto p : mp) { // iterate over the map
   //      if (p.second > 1) { // if count > 1, it's a duplicate
   //          cout << p.first << " "; // print the duplicate string
   //      }
   //  }



	return 0;
}

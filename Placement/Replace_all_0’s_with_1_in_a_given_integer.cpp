#include <iostream>
#include <string>
using namespace std;

int main() {
   int num;
   cout << "Enter an integer: ";
   cin >> num; 
 
  string n = to_string(num);

  for(int i = 0; i<n.length(); i++)
  {
   if(n[i]=='0')
   {
      n[i]='1';
   }
  }

  num = stoi(n);

  cout<<num;  

   return 0;
}

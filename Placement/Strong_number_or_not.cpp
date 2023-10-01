#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cin>>n;
  int num = n;
  int sum = 0;

  while(num>0){
    int fact = 1;
    int digit = num % 10;

    for(int i = 1; i<=digit; i++ )
    {
        fact = fact * i;
    }

    sum = sum + fact;

    num = num / 10;
  }

  if(n == sum)
  {
    cout<<"This is strong number";
  }
  else
    cout<<"Not Strong number";

    return 0;
}

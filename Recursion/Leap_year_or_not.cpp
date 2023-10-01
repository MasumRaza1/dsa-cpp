#include<bits/stdc++.h>
using namespace std;

int main(){
  int year;
  cout<<"Enter the year : ";
  cin>>year;

  if(year%400 == 0 || year%100 != 0 && year%4 == 0 )
  {
    cout<<"This is leap year";
  }
  else
    cout<<"This is not leap year";

  

  return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
  float radius;
  cin>>radius;
  double area = M_PI * radius * radius;
  double permiter = 2 * M_PI * radius;

  cout<<area<<endl;
  cout<<permiter<<endl;

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n = 25;
  int num = n;

  int sq = n * n;
  cout<<sq<<endl;

  bool ans = false;
 while(num > 0)
 {
 	if(num%10 == sq%10)
 	{
 		ans = true;
 	}

 	num = num /10;
 	sq = sq / 10;
 }

 if(ans)
 {
 	cout<<"Automorhic";
 }
 else
 {
 	cout<<"Not Automorhic";
 }


	return 0;
}

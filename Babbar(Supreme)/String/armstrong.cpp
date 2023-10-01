#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    // Write your code here
    int newNum = num;
    int sum = 0;
    while(newNum !=0){
         int digit = newNum%10;
          sum += digit * digit * digit;
         newNum = newNum/10;
    }
          return (num==sum);
}

int main(){
	int num;
	cin>>num;
  
  cout<<isArmstrong(num);

	return 0;
}

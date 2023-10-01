#include<bits/stdc++.h>
using namespace std;

int getQuetent(int divisor, int divident){
	int s = 0; 
	int e= divident;
	int ans = -1;

	while(s<=e){
		int mid= s+(e-s)/2;
		if(mid* divisor == divident){
			return mid;
		}else if (mid * divisor < divident){
			// ans me store store kro 
			// right me jao
            ans = mid;
			s=mid+1;
		}else{
			e=mid-1;
		}
	}
	return ans;

}

int main(){
	int divisor = 7;
	int divident = 29;
  
  int ans = getQuetent(divisor, divident);
  cout<<ans;

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
  
int a = 21;
int b = 24;

for(int i = a; i>=1; i--)
{
	if(a%i == 0  && b%i==0)
  	{
  		cout<<i;

  		break;
  	}

}

return 0;
}

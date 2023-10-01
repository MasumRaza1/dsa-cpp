#include<bits/stdc++.h>
using namespace std;

int main(){
	int start = 10;
	int end= 20;
	int flag;
	while(start <= end)
	{
		flag=0;

		for (int i = 2; i < start/2; i++)
		if (start % i == 0)
            {
                flag = 1;
                break;
            }
		if(flag==0)
		{
			cout<<start<<" "<<"Prime number"<<endl;
		}

		start++;

	}


  

	return 0;
}


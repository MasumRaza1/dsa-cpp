#include<bits/stdc++.h>
using namespace std;

int main(){

	int nums[] = {4,3,2,7,8,2,3,1};

	int size =  sizeof(nums) / sizeof(nums[0]);
        sort(nums, nums + size);

        vector<int> ans;

        for(int i = 1; i<=size; i++)
        {
        	cout<<i<<" ";
            if(nums[i]!=i)
            {

               // ans.push_back(i+1);
            	cout<<i<<" ";
            }
        }

        // for(auto i : ans)
        // {
        // 	cout<<i<<" ";
        // }
  

	return 0;
}

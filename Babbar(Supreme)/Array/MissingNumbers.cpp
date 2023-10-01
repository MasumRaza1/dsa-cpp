#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = n; // Initialize ans to n (the maximum possible missing number)

        for (int i = 0; i < n; i++) {
            ans ^= i;        // XOR operation with index
            ans = ans^ nums[i];  // XOR operation with the element
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {1,2,3,6,0,8,4,5};
    
    Solution solution;
    int missing = solution.missingNumber(nums);
    
    cout << "The missing number is: " << missing << endl;
    
    return 0;
}

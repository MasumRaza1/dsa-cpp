#include <iostream>
#include <vector>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 0);
    int left = 0;
    int right = n - 1;
    int idx = n - 1;

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare >= rightSquare) {
            result[idx] = leftSquare;
            left++;
        } else {
            result[idx] = rightSquare;
            right--;
        }

        idx--;
    }

    return result;
}

int main() {
    vector<int> nums = {-7, -5, -2, 0, 1};
    vector<int> result = sortedSquares(nums);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}

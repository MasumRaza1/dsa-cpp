#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool splitArray = false;
    cin >> splitArray;

    if (splitArray) {
        vector<int> leftHalf(arr.begin(), arr.begin() + n / 2);
        vector<int> rightHalf(arr.begin() + n / 2, arr.end());

        // Sort left half in decreasing order and right half in ascending order
        sort(leftHalf.begin(), leftHalf.end(), greater<int>());
        sort(rightHalf.begin(), rightHalf.end());

        // Multiply corresponding elements and print the result
        for (int i = 0; i < n / 2; i++) {
            cout << leftHalf[i] * rightHalf[i] << " ";
        }
    } else {
        // Calculate the product of adjacent elements in the array
        for (int i = 0; i < n - 1; i++) {
            cout << arr[i] * arr[i + 1] << " ";
        }
    }

    cout << endl;

    return 0;
}


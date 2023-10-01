#include <iostream>
#include <unordered_set>
using namespace std;

int findUnique(int arr[], int size) {
    unordered_set<int> uniqueSet;
    for (int i = 0; i < size; i++) {
        if (uniqueSet.count(arr[i]) == 0) {
            uniqueSet.insert(arr[i]);
        } else {
            uniqueSet.erase(arr[i]);
        }
    }
    return *uniqueSet.begin();
}

int main() {
    int arr[] = {2, 4, 6, 8, 4, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int uniqueValue = findUnique(arr, size);
    cout << "The unique value in the array is: " << uniqueValue << endl;
    return 0;
}

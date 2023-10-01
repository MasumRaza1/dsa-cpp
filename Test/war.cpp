#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<char> targets;
    vector<int> columnIndices;
    vector<int> rowPointers;

    char target;
    while (cin >> target) {
        targets.push_back(target);
    }

    int columnIndex;
    while (cin >> columnIndex) {
        columnIndices.push_back(columnIndex);
    }

    int rowPointer;
    while (cin >> rowPointer) {
        rowPointers.push_back(rowPointer);
    }

    vector<vector<char>> battlefield(m, vector<char>(n, 'z')); // Initialize the battlefield with 'z'.

    int targetIndex = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = rowPointers[i]; j < rowPointers[i + 1]; ++j) {
            int columnIndex = columnIndices[j];
            battlefield[i][columnIndex] = targets[targetIndex++];
        }
    }

    // Print the battlefield matrix
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << battlefield[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

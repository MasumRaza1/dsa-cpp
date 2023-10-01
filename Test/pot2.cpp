#include <iostream>
#include <vector>

using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    vector<vector<int>> pots(row, vector<int>(col));

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> pots[i][j];
        }
    }

    int h;
    cin >> h;

    int replaceRow = -1;
    int replaceCol = -1;

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (pots[i][j] >= h) {
                replaceRow = i;
                replaceCol = j;
                break;
            }
        }
        if (replaceRow != -1) {
            break;
        }
    }

    if (replaceRow == -1) {
        replaceRow = row - 1;
        replaceCol = col - 1;
    }

    cout << replaceRow << " " << replaceCol << endl;

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int L, W;
    cin >> L >> W;

    vector<vector<int>> room(L, vector<int>(W));
    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> room[i][j];
        }
    }

    int H;
    cin >> H;

    int rowto_repla = -1;
    int colto_repla = -1;

    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < W; ++j) {
            if (room[i][j] > H) {
                rowto_repla = i;
                colto_repla = j;
                break;
            }
        }
        if (rowto_repla != -1) {
            break;
        }
    }

    cout << rowto_repla<< " " << colto_repla << endl;

    return 0;
}

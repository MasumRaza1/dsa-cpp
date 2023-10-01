#include <iostream>
#include <vector>

using namespace std;

int main() {
    int Rows = 3;      
    int Cols = 5;      
    int PotHeight = 7; 
    
    vector<vector<int>> flowerPo = {
        {1, 2, 3, 4, 5},
        {6, 8, 9, 10, 11},
        {12, 13, 14, 15, 16}
    };

    int rowToRepla = -1;
    int colToRepla = -1;

    for (int i = 0; i < Rows; ++i) {
        for (int j = 0; j < Cols; ++j) {
            if (flowerPo[i][j] > PotHeight) {
                rowToRepla = i;
                colToRepla = j;
                break;
            }
        }
        if (rowToRepla != -1) {
            break;
        }
    }

    cout << rowToRepla << " " << colToRepla << endl;

    return 0;
}

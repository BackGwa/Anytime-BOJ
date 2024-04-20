#include <iostream>

using namespace std;

int main() {
    int k[9][9] = { 0 };
    int max = 0;
    int pos[2] = { 0, 0 };

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> k[i][j];
        }
    }

    for (int col = 0; col < 9; col++) {
        for (int row = 0; row < 9; row++) {
            if (k[col][row] >= max) {
                pos[0] = col + 1;
                pos[1] = row + 1;
                max = k[col][row];
            }
        }
    }

    cout << max << endl << pos[0] << " " << pos[1];

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int max = 0;
    int max_index;
    int x[9];

    for (int i = 0; i < 9; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < 9; i++) {
        if (x[i] > max) {
            max = x[i];
            max_index = i;
        }
    }

    cout << max << endl << max_index + 1;
    return 0;
}
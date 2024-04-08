#include <iostream>

using namespace std;

int main() {
    int x[6] = { 0 };
    int y[6] = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < 6; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < 6; i++) {
        cout << (x[i] - y[i]) * -1 << " ";
    }

    return 0;
}
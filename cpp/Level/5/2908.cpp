#include <iostream>

using namespace std;

int main() {
    string x, y, i, j;
    cin >> x >> y;

    for (int k = 2; k >= 0; k--) {
        i += x[k];
        j += y[k];
    }

    cout << max(i, j);

    return 0;
}
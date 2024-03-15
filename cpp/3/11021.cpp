#include <iostream>

using namespace std;

int main() {
    int t = 0;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        cout << "Case #" << i + 1 << ": " << x + y << endl;
    }

    return 0;
}
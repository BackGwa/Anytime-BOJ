#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int x, y;
        cin >> x >> y;
        cout << "Case #" << i << ": " << x << " + " << y << " = " << x + y << endl;
    }

    return 0;
}
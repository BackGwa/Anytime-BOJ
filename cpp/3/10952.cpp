#include <iostream>

using namespace std;

int main() {
    while (true) {
        int x, y;
        cin >> x >> y;
        if (x == y && x == 0)
            break;
        cout << x + y << endl;
    }

    return 0;
}
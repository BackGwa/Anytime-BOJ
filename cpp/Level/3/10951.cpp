#include <iostream>

using namespace std;

int main() {
    int x, y;
    while (!(cin >> x >> y).eof()) {
        cout << x + y << endl;
    }

    return 0;
}
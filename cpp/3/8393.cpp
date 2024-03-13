#include <iostream>

using namespace std;

int main() {
    int f = 0;
    int x;

    cin >> x;

    for (int i = 1; i <= x; i++) {
        f += i;
    }

    cout << f;

    return 0;
}
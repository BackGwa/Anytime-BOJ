#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++) {
        for (int j = x - i; j > 0; j--) {
            cout << " ";
        }
        for (int j = i * 2 - 1; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i < x; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 2 * (x - i) - 1; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    string x;
    int result = 1;
    cin >> x;

    for (int i = 0; i < x.length(); i++) {
        if (x[i] != x[(x.length() - 1) - i])
            result = 0;
    }

    cout << result;

    return 0;
}
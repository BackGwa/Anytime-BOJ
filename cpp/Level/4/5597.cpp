#include <iostream>

using namespace std;

int main() {
    int solver[31] = { 0 };
    int x;

    for (int i = 0; i < 28; i++) {
        cin >> x;
        solver[x] = 1;
    }

    for (int i = 1; i <= 30; i++) {
        if (!solver[i])
            cout << i << endl;
    }

    return 0;
}
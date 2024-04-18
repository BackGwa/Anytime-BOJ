#include <iostream>

using namespace std;

int main() {
    int n;
    int m = 1;
    
    for (int i = 0; i < 3; i++) {
        cin >> n;
        m = m * n;
    }

    for (int i = 0; i <= 9; i++) {
        int k = 0;
        for (char j : to_string(m)) {
            if ((int)j - '0' == i) {
                k++;
            }
        }
        cout << k << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    char s;
    int n;
    int result = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        result += s - 48;
    }

    cout << result;

    return 0;
}
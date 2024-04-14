#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int n, r;
    cin >> n;
    r = n;

    for (int i = 0; i < r; i++) {
        cin >> s;
        for (int j = 0; j < (int)s.length() - 1; j++) {
            if (s[j] != s[j + 1] && s.substr(j + 1).find(s[j]) != string::npos) {
                n -= 1;
                break;
            }
        }
    }

    cout << n;

    return 0;
}
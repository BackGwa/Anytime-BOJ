#include <iostream>

using namespace std;

int main() {
    int t, r;
    string s;
    cin >> t;

    for (int o = 0; o < t; o++) {
        cin >> r >> s;
        
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < r; j++) {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}
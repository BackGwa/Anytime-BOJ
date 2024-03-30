#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    string s, r;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> s;
        if (s.length() == 1)
            r = s + s;
        else
            r = s.substr(0, 1) + s.substr(s.length() - 1, 1);
        cout << r << endl;
    }

    return 0;
}
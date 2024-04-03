#include <iostream>

using namespace std;

int main() {
    string s;
    int x = 1;

    getline(cin, s);
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') x++;
    }

    if (s[0] == ' ')                x--;
    if (s[s.length() - 1] == ' ')   x--;

    cout << x;

    return 0;
}
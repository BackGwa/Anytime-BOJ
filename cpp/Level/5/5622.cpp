#include <iostream>
#include <string>

using namespace std;

int main() {
    string w[] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    string s;
    int result = 0;

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < 8; j++) {
            if (w[j].find(s[i]) != string::npos) {
                result += j + 3;
            }
        }
    }

    cout << result;

    return 0;
}
#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string x[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string s;
    cin >> s;

    for (string i : x) {
        if (s.find(i) != string::npos) {
            s = regex_replace(s, regex(i), "_");
        }
    }

    cout << s.length();

    return 0;
}
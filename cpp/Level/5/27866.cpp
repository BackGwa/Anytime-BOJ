#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int i;
    cin >> s >> i;
    cout << s.substr(i - 1, 1);
    return 0;
}
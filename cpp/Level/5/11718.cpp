#include <iostream>

using namespace std;

int main() {
    string s;
    while (true) {
        getline(cin, s);
        if (s != "") cout << s << endl;
        else break;
    }

    return 0;
}
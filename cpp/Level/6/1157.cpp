#include <iostream>

using namespace std;

int main() {
    string word;
    int index[26] = { 0 };
    int max = 0;
    char c = '?';

    cin >> word;

    for (char ch : word) {
        index[toupper(ch) - 'A']++;
    }

    for (int i = 0; i <= 'Z' - 'A'; i++) {
        if (index[i] > max) {
            max = index[i];
            c = i + 'A';
        } else if (index[i] == max) {
            c = '?';
        }
    }

    cout << c;
    
    return 0;
}
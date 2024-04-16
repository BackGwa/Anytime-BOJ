#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int _ = 0; _ < t; _++) {
        string s;
        int score = 0;
        int x = 0;
        cin >> s;

        for (char i : s) {
            if (i == 'X') x = 0;
            else {
                x += 1;
                score += x * 1;
            }
        }
        cout << score << endl;
    }
    return 0;
}
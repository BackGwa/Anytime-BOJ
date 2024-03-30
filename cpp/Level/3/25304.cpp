#include <iostream>

using namespace std;

int main() {
    int result = 0;
    int total, amount;
    cin >> total >> amount;

    for (int i = 0; i < amount; i++) {
        int x, y;
        cin >> x >> y;
        result += x * y;
    }

    if (total == result)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
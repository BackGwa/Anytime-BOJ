#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    cout << x * (y % 10) << endl;
    cout << x * ((y % 100) / 10) << endl;
    cout << x * (y / 100) << endl;
    cout << x * y;
    return 0;
}
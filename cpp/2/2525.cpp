#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y;
    cin >> z;
    y += z;

    x += static_cast<int>(y / 60);
    y = static_cast<int>(y % 60);

    if (x >= 24) x -= 24;

    cout << x << " " << y;

    return 0;
}
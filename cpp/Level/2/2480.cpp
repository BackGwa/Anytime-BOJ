#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    if (x == y && x == z) {
        cout << 10000 + (x * 1000);
    } else if (x == y || x == z) {
        cout << 1000 + (x * 100);
    } else if (y == z) {
        cout << 1000 + (y * 100);
    } else {
        vector<int> t = {x, y, z};
        sort(t.begin(), t.end());
        cout << t[2] * 100;
    }

    return 0;
}
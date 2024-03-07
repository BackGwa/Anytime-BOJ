#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << (x + y) % z << endl;
    cout << ((x % z) + (y % z)) % z << endl;
    cout << (x * y) % z << endl;
    cout << ((x % z) * (y % z)) % z;
    return 0;
}
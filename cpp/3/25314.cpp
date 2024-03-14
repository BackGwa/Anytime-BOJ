#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    x = static_cast<int>(x / 4);

    for (int i = 0; i < x; i++) {
        cout << "long ";
    }

    cout << "int";
    
    return 0;
}
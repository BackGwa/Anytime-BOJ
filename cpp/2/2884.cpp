#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    if (y < 45) {
        if (x == 0) {
            x = 23;   
        } else {
            x--;
        }
        y -= 45;
        y = 60 + y;
    } else {
        y -= 45;
    }

    cout << x << " " << y;
    
    return 0;
}
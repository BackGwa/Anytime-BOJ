#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int t;
    int h, w, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> h >> w >> n;
        int x = (int)(n % h);
        int y = (int)(n / h) + 1;
        if (x == 0) {
            x = h;
            y -= 1;
        }
        printf("%d%02d\n", x, y);
    }
    return 0;
}
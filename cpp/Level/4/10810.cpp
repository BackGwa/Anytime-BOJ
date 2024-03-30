#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int baguni[101] = {0};

    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        for (int j = x; j <= y; j++) {
            baguni[j] = z;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << baguni[i] << " ";
    }

    return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, i, j;
    cin >> n >> m;
    int baguni[n + 1];

    for (int k = 1; k <= n; k++)
        baguni[k] = k;

    while (m--) {
        cin >> i >> j;
        for (int k = 0; k <= (j - i) / 2; k++) {
            swap(baguni[k + i], baguni[j - k]);
        }
    }

    for (int k = 1; k <= n; k++)
        cout << baguni[k] << ' ';
}
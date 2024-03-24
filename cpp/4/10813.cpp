#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n];

    for (int i = 1; i <= n; i++) {
        arr[i - 1] = i;
    }

    for (int o = 0; o < m; o++) {
        int i, j, tmp;
        cin >> i >> j;
        tmp = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = tmp;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
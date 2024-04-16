#include <iostream>

using namespace std;

int main() {
    int n, m, tmp;
    cin >> n >> m;

    int x[n][m];
    int y[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tmp;
            x[i][j] = tmp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tmp;
            y[i][j] = tmp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << x[i][j] + y[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
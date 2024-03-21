#include <iostream>

using namespace std;

int main() {
    int t, x;
    cin >> t >> x;
    int arr[t];

    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < t; i++) {
        if (arr[i] < x) cout << arr[i] << " ";
    }

    return 0;
}
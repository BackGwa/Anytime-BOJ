#include <iostream>

using namespace std;

int main() {
    int result = 0;
    int t, x;
    cin >> t;
    int arr[t];

    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    cin >> x;

    for (int i = 0; i < t; i++) {
        if (arr[i] == x) result++;
    }

    cout << result;

    return 0;
}
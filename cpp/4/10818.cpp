#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    int arr[t];

    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + t);

    cout << arr[0] << " " << arr[t - 1];

    return 0;
}
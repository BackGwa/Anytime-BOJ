#include <iostream>

using namespace std;

int main() {
    int num[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
        num[i] = num[i] * num[i];
        sum += num[i];
    }
    cout << sum % 10;
    return 0;
}
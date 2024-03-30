#include <iostream>
#include <set>

using namespace std;

int main() {
    int x;
    set<int> namogi;

    for (int i = 0; i < 10; i++) {
        cin >> x;
        namogi.insert(x % 42);
    }

    cout << namogi.size();

    return 0;
}
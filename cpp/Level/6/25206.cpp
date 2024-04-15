#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, double> avg;
    avg.insert({"A+", 4.5});
    avg.insert({"A0", 4.0});
    avg.insert({"B+", 3.5});
    avg.insert({"B0", 3.0});
    avg.insert({"C+", 2.5});
    avg.insert({"C0", 2.0});
    avg.insert({"D+", 1.5});
    avg.insert({"D0", 1.0});
    avg.insert({"F", 0.0});

    string name, rate;
    double score;
    double all, result = 0;

    for (int i = 0; i < 20; i++) {
        cin >> name >> score >> rate;
        if (rate == "P") continue;
        all += score;
        result += score * avg[rate];;
    }

    cout << result / all;

    return 0;
}
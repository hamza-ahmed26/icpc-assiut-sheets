// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J
#include <iostream>
#include <iomanip>
using namespace std;
void getAverage(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double val;
        cin >> val;
        sum += val;
    }
    cout << fixed << setprecision(6) << (sum / n) << endl;
}

int main() {
    int n;
    if (cin >> n) {
        getAverage(n);
    }
    return 0;
}

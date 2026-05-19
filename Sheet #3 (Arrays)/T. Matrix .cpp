// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    int num[t][t];

    for(int i = 0; i < t; i++) {
        for(int j = 0; j < t; j++) {
            cin >> num[i][j];
        }
    }

    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0; i < t; i++) {
        sum1 += num[i][i];
        sum2 += num[i][t - 1 - i];
    }

    int sumt = abs(sum1 - sum2);
    cout << sumt << endl;

    return 0;
}

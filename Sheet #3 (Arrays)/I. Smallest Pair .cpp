// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include <iostream>
#include <algorithm>
using namespace std;
long long ar[1000002];
int main() {
    int t;
    int n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> ar[j];
        }
        long long min_val = 1e18;
        for (int j = 0; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                long long sum = ar[j] + ar[k] + (k + 1) - (j + 1);
                if (sum < min_val) {
                    min_val = sum;
                }
            }
        }

        cout << min_val << endl;
    }

    return 0;
}

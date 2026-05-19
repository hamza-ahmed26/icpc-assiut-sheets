// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include <iostream>
#include <algorithm>
using namespace std;
long long ar[1000002];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (ar[i] == ar[0]) {
            freq++;
        } else {
            break;
        }
    }
    if (freq % 2 != 0) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }

    return 0;
}

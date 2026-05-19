// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
#include <iostream>
#include <string>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    if (s[a] != '-') {
        cout << "No" << endl;
        return 0;
    }
    bool v = true;
    for (int i = 0; i < s.size(); i++) {
        if (i == a) {
            continue;
        }
        if (s[i] < '0' || s[i] > '9') {
            v = false;
            break;
        }
    }
    if (v) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

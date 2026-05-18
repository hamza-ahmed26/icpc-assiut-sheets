// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
#include <iostream>
using namespace std;
int main() {
    long long x;
    cin >> x;

    if (x <= 0) return 0;
    long long first = 0;
    cout << first << " ";

    if (x > 1) {
        long long second = 1;
        cout << second << " ";
        for (int n = 2; n < x; n++) {
            long long next = first + second;
            cout << next << " ";
            first = second;
            second = next;
        }
    }

    cout << endl;
}

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
#include <iostream>
using namespace std;
void print(int n, int c) {
    if (n < c) {
        return;
    }

    cout << n;

    if (n > c) {
        cout << " ";
        print(n - 1, c);
    }
}

int main() {
    int n;
    if (cin >> n) {
        print(n, 1);
    }
    return 0;
}

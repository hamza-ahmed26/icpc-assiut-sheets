// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int a = A, b = B, c = C;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << endl;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    return 0;
}

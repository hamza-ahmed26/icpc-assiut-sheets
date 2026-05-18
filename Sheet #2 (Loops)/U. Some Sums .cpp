// لينك السؤال :  https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U
#include <iostream>
using namespace std;
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    long long totalSum = 0;
    for (int i = 1; i <= n; i++) {
        int temp = i;
        int digitsSum = 0;
        while (temp > 0) {
            digitsSum += temp % 10;
            temp /= 10;
        }
        if (digitsSum >= a && digitsSum <= b) {
            totalSum += i;
        }
    }
    cout << totalSum << endl;
}

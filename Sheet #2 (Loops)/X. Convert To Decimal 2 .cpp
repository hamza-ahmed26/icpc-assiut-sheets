// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ones= 0;
        while (n > 0) {
            if (n % 2 == 1) {
                ones++;
            }
            n /= 2;
        }

        long long result = pow(2, ones) - 1;
        cout << result << endl;
    }
    
}

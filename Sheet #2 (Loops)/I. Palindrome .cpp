// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int original = n;
    int reversedNum = 0;
 while (n > 0) {
        int lastDigit = n % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        n = n / 10;
    }

    cout << reversedNum << endl;

    if (original == reversedNum) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

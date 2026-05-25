// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C
#include <iostream>
#include <string>
#include <bitset>
#include <algorithm>
using namespace std;
bool is_binary_palindrome(int x) {
    string binary = "";
    while (x > 0) {
        int remainder = x % 2;
        binary += to_string(remainder);
        x /= 2;
    }
    string reversed_binary = binary;
    reverse(reversed_binary.begin(), reversed_binary.end());
    return binary == reversed_binary;
}
bool is_odd(int x) {
    return x % 2 != 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (is_odd(n) && is_binary_palindrome(n)) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include <iostream>
using namespace std;
 
long long arr[100000];
 
int main() {
    long long n;
    cin >> n;
 
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    bool isPalindrome = true;
 
    for (long long i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
 
    if (isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include<iostream>
using namespace std;

int main () {
    int t; 
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n;

        long long fact = 1;
        for (int j = n; j > 0; j--) {
            fact = fact * j;
        }

        cout << fact << endl;
    }

    return 0;
}

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
#include <iostream>
using namespace std;
int main() {
    long long n;
    string x;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> x;           
for (long long j = x.size() - 1; j >= 0; j--) {    
            cout << x[j] << " ";
        }
        cout << endl;
}   
}

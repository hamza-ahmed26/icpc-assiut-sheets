// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
#include <iostream>
using namespace std;
void printEvenReverse(long long ar[], int n, int index) {
    if (index >= n) {
        return;
    }

    printEvenReverse(ar, n, index + 2);

    cout << ar[index] << " ";
}

int main() {
    int n;
    cin >> n;
    long long ar[n];

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    printEvenReverse(ar, n, 0);

    return 0;
}

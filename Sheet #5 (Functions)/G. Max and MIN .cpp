// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
#include <iostream>
using namespace std;
void findMinMax(int ar[], int size) {
    if (size <= 0) return;
    int min = ar[0];
    int max = ar[0];
    for (int i = 1; i < size; i++) {
        if (ar[i] < min) min = ar[i];
        if (ar[i] > max) max = ar[i];
    }
    cout << min << " " << max << endl;
}

int main() {
    int t;
    if (!(cin >> t)) return 0;

    int ar[t];
    for (int i = 0; i < t; i++) {
        cin >> ar[i];
    }
   
    findMinMax(ar, t);

    return 0;
}

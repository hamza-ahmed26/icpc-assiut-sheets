// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include <iostream>
#include <cmath>
#include <climits>
int num[100002];
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++) {
        cin >> num[i];
    }
    int max = INT_MIN; 
    int min = INT_MAX;
    int index_min = 0, index_max = 0;
    for (int m = 0 ; m < n ; m++) {
        if (num[m] < min) {
            min = num[m];
            index_min = m;
        }
    }
    for (int s = 0 ; s < n ; s++) {
        if (num[s] > max) {
            max = num[s];
            index_max = s;
        }
    }
    swap(num[index_min], num[index_max]);
    for (int i = 0 ; i < n ; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}

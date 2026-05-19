// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
#include <iostream>
#include <span>
#include <algorithm>
using namespace std;
int arr[105];
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int x = 0; x < n; x++) {
            cin >> arr[x];
        }
        for(int x = 0; x < n; x++) {
            for(int d = 1; d <= n - x; d++) {
                span<int> subArr(arr + x, d);
                int e = *max_element(subArr.begin(), subArr.end());
                cout << e << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

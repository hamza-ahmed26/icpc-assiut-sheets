// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
#include <algorithm>
#include <iostream>
using namespace std;
int freq[1000001];
int main() {
    int n , m ;
    cin >> n >> m;
    int arr[n];
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    for (int i = 0 ; i < n ; i++) {
        freq[arr[i]]++;
    }
    for (int i = 1 ; i <= m ; i++) {
        cout << freq[i] << endl;
    }
}

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
#include <iostream>
using namespace std;
int main() {
    int n , m;
    cin >> n >> m;
    int a[n][m];
    int element ;
    int f = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cin >> element;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == element) {
                f = 1;
            }
        }
    }
    if (f == 1) {
        cout << "will not take number" << endl;
    } else {
        cout << "will take number" << endl;
    }

}

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I
#include <iostream>
#include <algorithm>
using namespace std;
void swapMatrix(int arr[500][500], int n, int x, int y) {
    for (int i = 0; i < n; i++) {
        swap(arr[x][i], arr[y][i]);
    }
    for (int i = 0; i < n; i++) {
        swap(arr[i][x], arr[i][y]);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y;
    cin >> n >> x >> y;

    int arr[500][500];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
   swapMatrix(arr, n, x - 1, y - 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

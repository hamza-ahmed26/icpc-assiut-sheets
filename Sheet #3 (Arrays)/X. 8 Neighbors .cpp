// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X
#include <iostream>
using namespace std;
char arr[105][105]; 
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= m ; j++) {
            cin >> arr[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    if (arr[x-1][y-1] == '.' || arr[x-1][y] == '.' || arr[x-1][y+1] == '.' ||
        arr[x][y-1]   == '.' ||                        arr[x][y+1]   == '.' ||
        arr[x+1][y-1] == '.' || arr[x+1][y] == '.' || arr[x+1][y+1] == '.') 
    {
        cout << "no" << endl;
    } 
    else {
        cout << "yes" << endl;
    }
}

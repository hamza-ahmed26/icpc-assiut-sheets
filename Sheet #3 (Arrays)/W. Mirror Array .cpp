// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    long long n ,m ;
    cin>>n>>m ;
    int a[n][m] ;
    for (long long i = 0 ; i < n ; i++) {
        for (long long j = 0 ; j < m ; j++) {
            cin>>a[i][j];
        }
    }
    for (long long i = 0 ; i < n ; i++) {

            reverse(a[i], a[i] + m);
    }
    for (long long i = 0 ; i < n ; i++) {
        for (long long j = 0 ; j < m ; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

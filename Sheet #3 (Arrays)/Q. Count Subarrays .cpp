// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q
#include <iostream>
using namespace std;
int main() {
    int t ;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++) {
            cin >> ar[i];
        }
        long long total = 1;
        int lens = 1 ;
        for(int i=1; i<n; i++) {
            if(ar[i] >= ar[i-1]) {
                lens++;
            }
            else {
                lens = 1;
            }
            total += lens;
        }
        cout << total << endl;
    }


}

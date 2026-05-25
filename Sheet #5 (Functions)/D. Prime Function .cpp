// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D
#include <iostream>
using namespace std;
void prime (int n) {
    bool isprime = true;

    {
        if (n <= 1) {
            cout << "NO" << endl;
            return;
        }
        for (long long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        prime(n);
    }


}

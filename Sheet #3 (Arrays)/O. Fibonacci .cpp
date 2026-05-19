// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
#include <iostream>
using namespace std;
long long fib[10000];
int main () {
    fib[1] = 0;
    fib[2] = 1;
   long long n;  cin >> n;
   int i;
    for (int i = 3; i <= n; i++){
        fib[i] = (fib[i-1] + fib[i-2]) ;
    }
cout << fib[n] << endl;

    return 0;
}

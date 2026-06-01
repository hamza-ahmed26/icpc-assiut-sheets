// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E
#include <iostream>
using namespace std;
void base(long long x)
{
    if (x == 0)
    {
        return;
    }
   base (x / 2);
   cout << x % 2 ;
}
int main() {

    long long x;

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
       base (x);
       cout << endl ;
    }
}

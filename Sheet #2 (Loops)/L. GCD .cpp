// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int min_num;
    if (a < b) {
        min_num = a;
    } else {
        min_num = b;
    }

    int gcd = 1;
    for (int i = 1; i <= min_num; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    cout << gcd << endl;
    return 0;
}

/*
حل اخر و اسرع و اسهل و كل حاجة

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    __gcd(a, b);
    cout << __gcd(a, b);
} 
*/

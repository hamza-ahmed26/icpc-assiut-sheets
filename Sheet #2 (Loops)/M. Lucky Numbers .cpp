// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    bool anyLucky = false;
   for (int i = a; i <= b; i++) {
      bool isLucky = true;
   for (int temp = i; temp > 0; temp /= 10) {
          int digit = temp % 10;
          if (digit != 4 && digit != 7) {
               isLucky = false;
                break;
            }
        }

        if (i <= 0) isLucky = false;

        if (isLucky) {
            cout << i << " ";
            anyLucky = true;
        }
    }

    if (!anyLucky) {
        cout << -1;
    }}

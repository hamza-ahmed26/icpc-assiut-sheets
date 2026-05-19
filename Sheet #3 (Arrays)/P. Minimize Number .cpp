// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
#include <iostream>
using namespace std;
long long ar[10000];
int main () {
long long n;
long long operation = 0;
bool even = true;
cin >> n ;
for (int i = 0; i < n; i++) {
  cin >> ar[i];       
}
while (true)
{
  for (int i = 0; i < n; i++) {
    if (ar[i] % 2 != 0) {
      even = false;
      break; }
    }
    if (even) {
      for (int i = 0; i < n; i++) {
        ar[i] /= 2;
      }
      operation++;
    }
    else {
      break;
    }
   
}
cout << operation << endl;
return 0;
}

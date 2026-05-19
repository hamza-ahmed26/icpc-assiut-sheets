// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
#include <iostream>
#include <string>
using namespace std;
long long ar[10000000];
int main () {
  long long n;
  cin >> n;
  string s;
  for (long long i = 0; i < n; i++)
  {
    char c;
    cin >> c;
    s += c;
  }
long long sum = 0;
for (int i = 0; i < s.size(); i++) {
    ar[i] = s[i] - '0';
    sum += ar[i];

}
cout << sum << endl;
return 0;
}

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
#include <iostream>
#include <string>
using namespace std;
int main()
{
string s;
long long sum = 0;
cin>>s;
 for (int i = 0; i < s.size(); i++)
 {
  char c = s[i];
  sum += (long long)(c - '0');
 }
 cout << sum << endl;
return 0;
}

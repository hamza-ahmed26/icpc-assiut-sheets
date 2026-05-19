// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
#include <iostream>
#include <string>
using namespace std;
int main()
{
int t;
string s;
cin>>t;
 for (long long i = 0; i < t; i++)
 {
   cin >> s;
   if (s.length() > 10)
    {
      cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
    }
    else
    {
      cout << s << endl;
    }
 }
return 0;
}

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include <iostream>
#include <string>
using namespace std;
int main()
{
string a, b;
cin >> a >> b;
int len1 = a.length();
int len2 = b.length();
string c=a+b;
cout << len1 << " " << len2 << endl;
cout << c << endl;
 char temp = a[0];
  char temp1 = b[0];
  swap(temp, temp1);
  a[0] = temp;
  b[0] = temp1;
cout << a << " " << b << endl;
return 0;
}

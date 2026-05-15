// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include<iostream>
using namespace std;
int main()
{
long long t; cin >> t;
long long max =-1e9;
for (long long i=0;i<t; i++)
 { long long X;
 cin >> X;
if (X>max){max=X;}
}
cout << max;
}

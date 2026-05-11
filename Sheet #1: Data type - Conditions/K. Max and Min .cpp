// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include<iostream>
using namespace std;
int main()
{
int A,B,C;
cin >> A>>B>>C;
int max =A;
int min=A;
if (B>max) {max=B;}
if (B<min) {min=B;}
if (C>max) {max=C;}
if (C<min) {min=C;}
cout << min << " " << max << endl;
}

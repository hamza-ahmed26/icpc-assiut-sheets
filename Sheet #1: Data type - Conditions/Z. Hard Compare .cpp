// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
double A,B,C,D;
cin >> A >>B>>C>>D;
double X = B*log (A);
double Y =D*log (C);
if(X > Y) {cout << "YES" << endl;}
else {cout << "NO" << endl;}
}

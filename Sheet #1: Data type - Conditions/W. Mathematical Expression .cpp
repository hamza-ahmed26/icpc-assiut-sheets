// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
#include<iostream>
using namespace std;
int main()
{
long long  A,B,C;
char S,Q;
cin >> A >> S >> B >> Q >> C ;
long long W= A + B;
long long E = A-B;
long long R =A*B;
if (S=='+')
if (C==W) {cout << "Yes" << endl;}
else {cout << W << endl;}
if (S=='-')
if (C==E){cout << "Yes" << endl;}
else{cout << E << endl;}
if (S=='*')
if (C==R) {cout << "Yes" << endl;}
else {cout << R << endl;}
}

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
#include<iostream>
using namespace std;
int main()
{
long long A,B,C,D;
cin >> A>>B>>C>>D;
long long X=1;
X=(X*A)%100;
 X = (X*B)%100;
X= (X*C)%100;
X= (X*D)%100;
if (X<10){cout << "0" ;}
cout << X << endl;
}

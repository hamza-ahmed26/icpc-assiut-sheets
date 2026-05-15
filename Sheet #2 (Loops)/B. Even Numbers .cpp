// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
#include<iostream>
using namespace std;
int main()
{
long long X;
cin >> X;
if (X < 2){cout << "-1" << endl;}
else{
for(long long i=1;i<=X;i++){
if (i%2!=0)continue;
cout << i << endl;}
}
}

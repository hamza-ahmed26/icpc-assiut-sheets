// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
#include<iostream>
using namespace std;
int main()
{
long long X;
cin >> X;
for(long long i=X;i>=1;i--){
for (long long j=1;j<=i;j++) {
cout << "*";}
cout << endl;
}
}

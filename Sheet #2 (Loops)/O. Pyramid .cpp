// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O
#include<iostream>
using namespace std;
int main()
{
long long X;
cin >> X;
for(long long i=0;i<X;i++){
for (long long j=0;j<=i;j++) {
cout << "*";}
cout << endl;
}
}

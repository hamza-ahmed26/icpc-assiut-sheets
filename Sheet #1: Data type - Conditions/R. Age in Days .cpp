// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
#include<iostream>
using namespace std;
int main()
{
long long N;
cin >> N;
long long Y=N/365;
 N=N-(Y*365);
long long M= N/30;
 N=N-(M*30);
 cout << Y << " years"<<endl;
cout << M << " months"<<endl;
cout << N << " days"<<endl;
}

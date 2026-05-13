// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
#include<iostream>
using namespace std;
int main()
{
int A ,B;
char S;
cin >> A >>S >>B;
if (S=='>')
if (A > B) {cout << "Right" << endl;}
else {cout << "Wrong" << endl;} 
else if (S=='=') 
 if (A==B){cout << "Right" << endl;}
else{cout << "Wrong" << endl;}
else if (S =='<') 
if (A<B){cout << "Right" << endl;}
else{cout << "Wrong" << endl;}
}

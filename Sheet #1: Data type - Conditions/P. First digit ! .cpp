// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
#include<iostream>
using namespace std;
int main()
{
int X ;
cin >> X;
(999 < X && X<= 9999 );
int Y = X / 1000;
if (Y==1||Y==3||Y==5||Y==7||Y==9){cout << "ODD" << endl;}
if (Y == 2 || Y==4||Y==6||Y==8){cout << "EVEN" << endl;}

} 

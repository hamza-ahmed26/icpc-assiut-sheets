// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B
#include <iostream>
#include<cmath>
using namespace std;
 void sum ( int n)
 { 
    for (int i = 1 ; i <n ;i++)
    {
        cout << i << " ";
    }
    cout << n ;
 } 
int main()
{
    int  n;
    cin >>n;
    sum(n);
    return 0;
}

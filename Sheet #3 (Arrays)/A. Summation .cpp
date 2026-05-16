// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long x;
    long long sum = 0;
    cin >> x;
    long long absolute [x];
    for (long long i = 0; i < x; i++)
    {

        cin >> absolute[i];
        sum+=absolute[i];
    }
  if (sum<0)
  {
    sum= abs(sum);
  }
  
    cout <<  sum << endl;
}

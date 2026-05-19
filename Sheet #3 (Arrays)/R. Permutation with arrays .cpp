// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
#include <iostream>
#include <algorithm>
using namespace std;
long long a[10000000];
long long b[10000000];
int main()
{
 int t;
int n;
    if (!(cin >> n)) return 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout  << " " ;
   }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i] ;
   }
    sort(a, a + n);
    sort(b, b + n);
    bool flag = true;
    for (int i = 0; i < n; i++)
    { 
        if (a[i] != b[i])
        {
            flag = false;
        
            break;
        }
}
  if (flag)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
     return 0;
}

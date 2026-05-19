// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
long long a[10000000] ;

int main()
{
  int n ;
  cin >> n ;
  int q ;
  cin >> q ;
  long long sum = 0 ;
  for (int i = 0 ; i < n ; i++)
  {
    cin >> a[i] ;
  }
   long long pref[n];
  pref[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    pref[i] = pref[i - 1] + a[i];
  }
  for (int i = 0; i < q; i++)
  {
    int l, r;
    cin >> l >> r;
   sum = pref[r - 1] - (l > 1 ? pref[l - 2] : 0);
    cout << sum << endl;
  }
  
}

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
#include <iostream>
#include <algorithm>
using namespace std;
long long a[10000000] ;

int main()
{
  int n, q ;
   int x ;
    cin >> n ;
     cin >> q ;
     for (int i = 0; i < n; i++){
        cin >> a[i] ; }
        
        sort(a, a + n) ;
        for (int i = 0; i < q; i++)

        {
           
            cin >> x ;
            if (binary_search(a, a + n, x))
                cout << "found\n" ;
            else
                cout << "not found\n" ;
        }
        
     return 0;
}

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
#include <iostream>
#include<cmath>
using namespace std;
 void sum (int x , int n)
  
 { 
    
    long long s = 0;
    
            for (int i = 2 ; i <= n ; i+=2)    {

                     long long r = pow(x,i);
                     s+=r;
                     
                 }    cout << s << endl; 
        }
int main()
{
    int x , n;
    cin >> x >>n;
    sum(x,n);
  
    return 0;
}

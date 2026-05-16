// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n < 2)
    {
        cout << "  ";
        return 0;
    }
    bool isprime = true;

    {
    long long i;
    for (i = 2; i <= n; i++)
        {
         
         isprime = true;
        for (long long j = 2; j * j <= i; j++)
                {
                 if (i % j == 0)
                 {
                      isprime = false;
                      break;
                 }
                }
                  
         if (isprime)
        {
            cout << i << " ";
        }    
        }
      
    }
}

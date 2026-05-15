// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n < 2)
    {
        cout << "NO" << endl;
        return 0;
    }
bool isprime = true;

    {
        for (long long i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }       
   
            }
        }

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
#include <iostream>
using namespace std;

long long arr[100000];

int main() {
    long long n;

    cin >> n;

    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
     long long min;
    for (int i = 0; i < n; i++)
    {
         for (long long  j= 0; j < n-1; j++)
        {
            if (arr[j+1] < arr[j])
            {
             swap(arr[j], arr[j + 1]);
            }
             else
            {
                continue;
            }
        }

        
    }
    for (long long i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
#include <iostream>
using namespace std;
long long arr[1000];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] < 0)
        {
            arr[i] = 2;
        }
        else 
        {
            arr[i] = 0;
        }

        cout << arr[i] << " ";
    }
}

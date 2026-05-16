// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
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
for (int i = n - 1; i >= 0; i--)
{
    cout << arr[i] << " ";
}
return 0;
}

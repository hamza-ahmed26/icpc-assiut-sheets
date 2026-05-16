// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
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
if (arr[i]<=10)
{
    cout << "A[" << i << "] = " << arr[i] << endl;

}
else
{
    continue;
}
}
}

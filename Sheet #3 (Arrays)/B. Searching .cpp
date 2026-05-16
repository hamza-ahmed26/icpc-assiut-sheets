// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
#include <iostream>
using namespace std;
long long arr[1000000];
int main()
{
long long x;
int n;
long long i = 0;
int found = -1;

cin >> x;
for (long long i = 0; i < x; i++)
{
    cin >> arr[i];
}
cin >> n;
 for (long long i = 0; i < x; i++)
 {
    if (arr[i] == n)
    {
        found = i;
        break;
    }

 }
cout << found << endl;
}

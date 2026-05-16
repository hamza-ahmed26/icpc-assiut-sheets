// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include <iostream>
using namespace std;
long long arr[1000];
int main()
{
int n;
int min = 0;
cin >> n;
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
for (int i = 0; i < n; i++)
{
    if (arr[i] < arr[min])
    {
        min = i;
    }

}

cout << arr[min] << " " << min+1 << endl;
return 0;
}

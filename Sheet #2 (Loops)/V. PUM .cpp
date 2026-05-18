// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
#include <iostream>
using namespace std;
int main()
{
 int t;
 cin >> t;
 int r = 1;
    for (int i = 0; i < t; i++)
    {
    for (int j = 1; j <= 4; j++)
    {
     if (j % 4 == 0)
           {
          cout << "PUM";
            }
            else
            {
                cout << r << " ";
            }
            r++;
        }
        cout << endl;
    }
}

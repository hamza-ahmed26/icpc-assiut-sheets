// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
#include <iostream>
#include <string>
using namespace std;
void pri(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
        if (i!=s.size()-1)
        {
            cout << " ";
        }
    }
        cout << endl;

}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
    string s ;
        cin >>s;
        pri(s);
    }
    
}

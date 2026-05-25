// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H
#include <iostream>
#include <string>
using namespace std;

void times(int x , char c)
{
    
    for (int i = 0; i < x; i++)
    {
        cout << c;
        if (i < x - 1)
        {
            cout << " ";
        }
    }
}
int main()
{
    int t;
    int x ; 
    char c ;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> c ;
       times(x , c);
       cout << endl;
    }
}

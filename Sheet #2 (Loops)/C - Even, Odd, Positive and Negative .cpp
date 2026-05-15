// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include<iostream>
using namespace std;
int main (){;
int t; int x; int even = 0; int odd = 0; int positive = 0; int negative = 0;
cin >> t;
for (int i = t; i>0; i--)

{
    cin >> x;
    if (x%2==0)
    {
    even++;
    }
    else
    {
    odd++;
    }
    if (x>0)
    {
    positive++;
    }
    else if (x<0)
    {
    negative++;
    }
    
    
}
cout << "Even: " << even << endl;
cout << "Odd: " << odd << endl;
cout << "Positive: " << positive << endl;
cout << "Negative: " << negative << endl;


}

// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
#include <iostream>
#include <algorithm>
using namespace std;
int print (int n)
{
    if (n==0)
    {
        return 0 ;
    }
     cout << "I love Recursion" << endl;
    return print(n-1);
}
int main() {

    int n;
    cin>>n ;
    print (n);
}


// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
#include <iostream>
#include <algorithm>
using namespace std;
int print ( int c , int n)
{
    if (c>n)
    {
        return  n ;
    }
     cout << c << endl;
    return print(c+1 , n);
}

int main() {
    int n;
    cin>>n ;
    print (1,n);
}

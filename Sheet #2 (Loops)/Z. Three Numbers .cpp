// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z
#include <iostream>
using namespace std;
int main() {
    int k , s;
    cin>>k>>s;
    int z ;
    int steps=0;
    for(int x=0; x<=k; x++) {
        for(int y=0; y<=k; y++) {

            z = s - (x + y) ;
            if (z >= 0 && z <= k)
                steps++;

        }
    }
    cout<<steps<<endl;
}

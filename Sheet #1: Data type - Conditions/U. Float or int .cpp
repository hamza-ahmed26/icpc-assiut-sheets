// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
#include <iostream>
using namespace std;

int main() {
    double N;
    cin >> N;

    if (N == int(N)) {  cout << "int " << int(N);}
        else{ cout << "float " << int(N) << " " << N - int(N);}

    return 0;
}

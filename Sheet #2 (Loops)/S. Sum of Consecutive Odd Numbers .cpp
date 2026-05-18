// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
#include <iostream>
using namespace std;
int main() {
long long a , b ;
long long sum = 0;
long long min = 0;
long long max = 0;
    long long x= 0;
    cin >> x ;
    for (long long i = 0; i < x; i++){
        cin >> a >> b ;
        
if(a > b){
    max = a;
    min = b;
}
else{
    max = b;
    min = a;
}
{
 for (long long j = min+1; j < max; j++)
 {
    if (j%2!=0)
    {
        sum = sum + j;
    }
 }
 
}
cout  << sum << endl;
        sum = 0;
    }
}

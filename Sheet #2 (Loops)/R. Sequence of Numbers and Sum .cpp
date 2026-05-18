// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
#include <iostream>
using namespace std;
int main() {
long long a , b ;
long long sum = 0;
long long min = 0;
long long max = 0;
    long long x= 0;
    for (long long i = 0; i > -1; i++){
        cin >> a >> b ;if (a<=0 || b <=0)
        {
         break;
        }
        
else if(a > b){
    max = a;
    min = b;
}
else{
    max = b;
    min = a;
}
{
 for (long long j = min; j <= max; j++)
 {
    sum = sum + j;
    cout << j << " ";
 }
 
}
cout << "sum =" << sum << endl;
        sum = 0;
    }
    }

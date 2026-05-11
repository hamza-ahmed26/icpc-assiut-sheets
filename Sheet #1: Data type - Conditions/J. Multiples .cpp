// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
#include<iostream>
using namespace std;
int main (){

long long a , b ;
long long max=0;
long long min =0;
cin >> a >> b;
if (a>=b){max=a,min=b;}
else{max=b , min=a;}
long long m =max % min ;
m==0 ? cout<<"Multiples" : cout <<"No Multiples";

return 0 ;

}

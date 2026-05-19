// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U
#include <iostream>
using namespace std;
int main() {
int a ;
    int b ;
    cin>>a>>b;
    int arr1[a];
    int arr2[b];
    for (int i = 0; i < a; i++) {
        cin>>arr1[i];
    }
    for (int i = 0; i < b; i++) {
        cin>>arr2[i];
    }
    int j = 0;
     for (int i = 0; i < a; i++) {
         if (j<b && arr1[i] == arr2[j]) {
             j++;
         }

     }
    if (j==b) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

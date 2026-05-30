#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    //Using Eucledian Algorithm
    while(n >0 && m>0){
        (n>m)?n%=m:m%=n;
    }
    (n==0)?cout<<m:cout<<n;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m=n,sum_of_dig=0;
    while(m>0){
        sum_of_dig+=pow(m%10,3);
        m/=10;
    }
    if(sum_of_dig==n)cout<<true;
    else cout << false;
}
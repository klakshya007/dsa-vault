#include <bits/stdc++.h>
#include <bit> //If You Only Wish To Use popcount()
using namespace std;

int main(){
    //Pop Count Returns The Number Of Bits Which Are 1 Or "SET"
    // in Binary Form Of A Decimal Int
    int num1=7;
    int cnt1 = __builtin_popcount(num1);
    cout << cnt1 <<endl;

    long long num2=73121451238437;
    int cnt2 = __builtin_popcountll(num2);
    cout << cnt2 <<endl;
}
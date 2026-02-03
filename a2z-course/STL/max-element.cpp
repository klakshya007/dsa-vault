#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec={1,2,3,4,4,234,23};
    auto a=vec.begin();
    int maxi=*max_element(a,a+7); //Define The Range
    cout << maxi;
}
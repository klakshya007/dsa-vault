#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n = 7789;
    vector<int>vec;
    while (n>0){
        vec.push_back(n%10);
        n=n/10;
    }   
    //The Output Comes In Reverse So
    reverse(vec.begin(),vec.end());
    for(auto it:vec) {
        cout << it << " "; 
    }
}
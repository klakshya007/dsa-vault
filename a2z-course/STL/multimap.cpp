#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int,int>mpp; //Same As Map But Multiple Occurences Of Same Keys Are Allowed
    mpp.emplace(1,10);
    mpp.emplace(1,102);
    mpp.emplace(13,103);
    mpp.emplace(11,101);
    mpp.emplace(12,104);
    mpp.emplace(1,10123);
    for (auto it:mpp){
        cout << it.first << " : " <<it.second << endl;
    }
}
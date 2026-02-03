#include <bits/stdc++.h>
using namespace std;

int main(){
    //This Map Isnt Sorted According To The Keys
    //But The Keys Are Unique & The Values In Them Can't Be Overwritten
    unordered_map<int,int>ump;
    ump.emplace(1,30);
    ump.emplace(2,30123);
    ump.emplace(3,303);
    ump.emplace(4,3312);
    ump.emplace(5,32131);
    ump.emplace(6,233);
    ump.emplace(6,2323);
    for (auto it : ump){
        cout<< it.first << " : "<< it.second <<endl;
    }
}
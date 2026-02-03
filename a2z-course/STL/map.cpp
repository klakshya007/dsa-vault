#include <bits/stdc++.h>
using namespace std;

int main() {
    map<pair<int,int>,int>mpp_pair1;
    map<int,pair<int,int>>mpp_pair2;
    map<int,float>mpp; //Works As A Key Value Pair {Similar To Associative Arrays In PHP}
    //Maps Stores The Keys In Sorted Order
    mpp[1]=2;
    mpp[2]=6;//2 As Key And 6 As The Value To Be Stored
    mpp[3]=5;

    mpp.emplace(1,3);
    mpp.emplace(2,5);
    mpp_pair1[{1,3}]=3;
    for (auto it:mpp){
        cout << it.first << ":" << it.second << "\n";
    }
}
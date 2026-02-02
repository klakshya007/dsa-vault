#include <bits/stdc++.h>
using namespace std;

int main() {
    //Creating A Pair
    pair<int, int> p = {1,3};
    
    //Nested Pairs
    pair<int,pair<int, int>> q={1,{3,4}};

    //Array Of Pairs
    pair<int,int> arr[3]={{1,3},{2,3},{3,3}};

    //Printing The Pairs
    cout << p.second <<endl;
    cout << q.second.first <<endl;
    cout << arr[1].first;

}
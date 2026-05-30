#include <iostream>
#include <map>

using namespace std;

int main(){
    string a;
    cin >> a;

    //precompute
    map <int,int> mpp;
    for (int i=0;i<a.size();i++){
        mpp[a[i]]++;
    }

    //iterate
    for(auto it: mpp){
        cout << it.first << "->" << it.second <<"\n";
    }
}
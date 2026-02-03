#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        vector<int>vec;
        for (int i=0;i<m;i++){
            int k;
            cin >> k;
            vec.push_back(k);
        }
        int count = 0;
        for (int j=0;j<m;j++){
            bool hasInv=false;
            for(int i=0;i<j;i++){
                if(vec[i] > vec[j]){
                hasInv=true;
                break;
            }
        }
        if(hasInv)count++;
    }
    cout << count << "\n";
}}
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <int> vec1(n);
        for(int i=0;i<n;i++){
            cin >> vec1[i];
        }
        vector <int>vec2(vec1);
        sort (vec2.begin(),vec2.end(),greater<int>());
        int diff_index;
        for (int i=0;i<n;i++) {
             if (vec1[i]!=vec2[i]){
                diff_index=i;
                break;
            }
        }
        auto max_it=max_element(vec1.begin()+diff_index,vec1.end());
        reverse(vec1.begin()+diff_index,max_it);
        for (auto it:vec1){
            cout << it << " ";
        }
    }
}
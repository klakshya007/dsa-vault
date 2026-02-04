#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    while (k--) {
        int m;
        cin >> m;

        vector<int> inp;   // create ONCE per test case
        set<int> s;

        for (int i = 0; i < m; i++) {
            int n;
            cin >> n;
            inp.push_back(n);
            s.insert(n);
        }

        int d = s.size();
        int ans = 0;

        // same logic as the provided solution
        for (int x : s) {
            if (x >= d) {
                ans = x;
                break;
            }
        }

        cout << ans << '\n';
    }
}

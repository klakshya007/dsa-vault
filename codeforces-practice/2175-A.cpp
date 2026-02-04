#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // store unique elements
        set<int> s(a.begin(), a.end());
        int d = s.size();   // number of distinct colors

        int ans = d;
        while (s.count(ans)) {
            ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}

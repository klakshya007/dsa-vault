#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> stk;
    stk.push (1);
    stk.push (21331);
    stk.push (41234);
    stk.pop();
    cout << stk.top() <<endl;
    cout << stk.size() <<endl;
    cout << stk.empty() << endl;
}
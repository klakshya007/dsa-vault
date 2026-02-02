#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    q.push (3);
    q.push (4);
    q.push (5);
    q.push (32);
    q.push (4);
    q.pop();
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;
}
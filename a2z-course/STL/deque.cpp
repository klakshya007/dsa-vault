#include <bits/stdc++.h>
using namespace std;

int main() {
    deque <int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(-2);
    dq.push_front(-1);
    dq.push_front(0);
    dq.pop_back();
}
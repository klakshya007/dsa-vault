#include <bits/stdc++.h>
using namespace std;

int main() {
    list <int> ls;
    ls.push_back(1);
    ls.push_back(3);
    ls.push_back(2);
    ls.push_front(5);
    ls.push_front(3);
    ls.pop_front();
    ls.pop_back();
    ls.emplace_back(3);
    ls.emplace_front(4);
    cout << ls.back() << " ";
    cout << ls.front();
}
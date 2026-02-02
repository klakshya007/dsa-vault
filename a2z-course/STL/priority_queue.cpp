#include <bits/stdc++.h>
using namespace std;

int main() {
    //Max Heap
    priority_queue<int>pq;
    pq.push(4);
    pq.push(4523);
    pq.push(3213);
    pq.push(2);
    while (!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    //Min Heap
    priority_queue<int, vector<int>, greater<int>> pq_min;
    pq_min.push(4);
    pq_min.push(6);
    pq_min.push(5);
    pq_min.push(10);
    while (!pq_min.empty()){
        cout << pq_min.top() << " ";
        pq_min.pop();
    }
}
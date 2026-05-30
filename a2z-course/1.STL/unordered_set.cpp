#include <bits/stdc++.h>
using namespace std;

int main(){
    //MultiSet Is Similar To Set But It Isnt Sorted, And Uniqueness Is There
    //Almost Like Stack
    unordered_set<int>us;
    us.insert(5); 
    us.insert(2); 
    us.insert(3); 
    us.insert(1231); 
    us.insert(123123); 
    us.insert(5232);
    for (auto i:us){
        cout << i << " ";
    } 
}
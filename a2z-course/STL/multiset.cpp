#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int>ms; //Similar To Set But The Multiple Entries Of The Same Element Is Allowed
    ms.insert(5);//But The Set Is Still Sorted
    ms.insert(5);
    ms.insert(1);
    ms.insert(10);
    ms.insert(2);
    ms.insert(1);
    ms.insert(32);
    for (auto i:ms){
        cout << i << " ";
    }
    cout << ms.count(2); //Returns The Number Of Occurences Of The Elements Provided
    ms.erase(ms.find(1));//Removes The First Occurence
    ms.erase(5);//Removes All Occurences
    cout << endl;
    for (auto i:ms){
        cout << i << " ";
    }
}
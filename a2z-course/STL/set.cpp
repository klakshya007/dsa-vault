#include <bits/stdc++.h>
using namespace std;

//Using Set And Its Types Is Basically Beneficial Becoz It Has Log(N)
int main(){
    set<int>s; //Ordered & Unique
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(120);
    s.insert(2);
    //Find Function -> Returns The Address Of The Element & Not The Index
    auto it = s.find(120);
    for (auto i:s){
        cout << i << " ";
    }

    s.erase(it);
    cout << "\n";
    for (auto i:s){
        cout << i << " ";
    }
    cout << endl;
    cout << s.size() << "\n"; //Number Of Elements In Set -> These Functions Are Similar To Vectors

    cout << s.count (5) << "\n"; //Present Or Not & In What Count
    //Erase Returns The s.end() If The Required Element Isn't Present
    auto it1= s.begin();
    auto it2= s.end();
    s.erase(it1,it2);//Range Specified To Erase The Elements
}

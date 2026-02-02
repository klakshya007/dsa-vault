#include <bits/stdc++.h>
using namespace std;

int main() {
    //Creating A Vector
    vector<int> v = {1};

    //Inserting At Last
    v.push_back(3);
    v.emplace_back(5); //Takes Significantly Less Time

    //Vector Of Pair
    vector <pair<int,int>> vec_p;
    
    //Inserting Elements
    vec_p.push_back({1,3});
    vec_p.emplace_back(4,5);//Difference In Both Of Them Is About The Curly Brackets

    //Creating A Vector With Multiple Instances Of The Same Element
    vector<int> vec(5,100);//100->5 Times
    vector<int> rand(5);//Takes Some Garbage Value

    //Creating A Duplicate Vector
    vector <int> v1={1,3};
    vector <int> v2(v1);

    //Important Functions
    cout << v.back() << endl; //Last Element  //Less Used
    cout << *v.begin() << endl; // First Element
    cout << *(v.end()-1)<< endl; //Last Element +1
    cout << *(v.rend()-1) << endl; //First Element - 1 //Works In Reverse Manner
    cout << *v.rbegin() << endl; // Last Element

    //Iterators
    vector<int>::iterator itv = v.begin(); //The First Element

    cout << *itv << endl; //Asterisk Is Required To De-Reference The Address
    cout <<"\n\n";

    //Displaying A Complete Vector
    vector <int> v3= {1,3,4,5,5,3,23,423,234,23,4};
    for (vector<int>::iterator it=v3.begin();it!=v3.end();it++) {
        cout << *it << " ";
    }
    cout <<endl;

    //Auto Keyword For Displaying 
    for (auto it :v3) {
        cout << it << " ";
    }
    
    //Erase Function
    v3.erase(v3.begin()+1); //Direct Location
    v3.erase(v3.begin(),v3.begin()+2);

    //Insert Function (High Time Complexity)
    vector<int> v4(5,100);
    v4.insert(v4.begin(),300);
    v4.insert(v4.begin(),3,20);

    //Inserting Another Vector In A Main Vector
    cout << endl;
    vector<int>v5={1,2,4,5};
    v4.insert(v4.begin(),v5.begin(),v5.end());
    for (auto it: v4) {
        cout << it << " ";
    }
    cout <<endl;

    //More Functions Of Vectors
    cout << v4.size() <<endl;
    v4.pop_back();
    v3.swap(v4);
    v4.clear();
    cout << v4.empty();
}
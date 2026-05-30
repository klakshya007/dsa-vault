#include <bits/stdc++.h>
using namespace std;

bool my_comp(pair<int,int> p1, pair<int,int> p2) {
    if (p1.second != p2.second)
        return p1.second < p2.second;   // ascending by second
    return p1.first > p2.first;         // descending by first
}

int main(){
    int a,n;
    vector<int>v;
    sort (a,a+n);//Sorts In Ascending Order
    sort(v.begin(),v.end());//Sorts The Vector In Asceding Order
    sort(a,a+2);//Sorts A Part Of The Complete Given Structure
    sort (a,a+n,greater<int>()); 
    //Here greater<int> is a comparator which returns true if a[i]>a[i+1]

    pair<int,int>arr[]={{1,2},{2,3},{3,4},{4,5},{5,6}};

    //Creating A Custom Comparator
    //Sorts A Pair On The Basis Of The Second Element
    //If The Second Element Is Same Then 
    //Sorts On The Basis Of The First Element But In Descending Order

    sort (arr,arr+5,my_comp);
}


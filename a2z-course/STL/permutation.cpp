#include <bits/stdc++.h>
using namespace std;

int main(){
    //next_permutation outputs all the possible permutations 
    //but make sure the string should be sorted as it only
    //outputs the remaining permutations and not all of them
    string s="123"; 
    do {
        cout << s << endl;
    }
    while (next_permutation(s.begin(),s.end()));

    cout <<endl<<endl;
    string s2="321"; 
    do {
        cout << s2 << endl;
    }
    while (next_permutation(s2.begin(),s2.end()));
}
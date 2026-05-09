#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string name;
    cin >> name;

    //precompute
    int hash[26]={0};
    for (int i=0;i<name.size();i++){
        hash[name[i]-'a']++;
    }

    //fetch
    int n;
    cin >> n;
    while(n--){
        char a;
        cin >> a;
        cout << hash[a-'a'];
    }
}
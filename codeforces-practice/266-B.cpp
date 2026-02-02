#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,t;
    cin >>n>>t;

    string s;
    cin >> s;

    while(t--){
        for (int x=0;x<n-1;x++){
        if (s[x]=='B'&&s[x+1]=='G'){
            s[x]='G';
            s[x+1]='B';
            x++;
        }
    }}
    cout << s;
}
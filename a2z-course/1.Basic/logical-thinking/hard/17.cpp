#include <iostream>
using namespace std;

int main(){
    int n=4;
    int a=97;
    for(int i=1;i<=n;i++){
        for (int j=1;j<n+i;j++){
            if(j>n-i) {
                cout << (char)a;
                if(j>=n)a--;
                else a++;
            }
            else cout << " ";
        }
        cout << "\n";
        a=97;
    }
}
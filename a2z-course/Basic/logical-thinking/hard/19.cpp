#include <iostream>

using namespace std;

int main(){
    int n=5;
    for(int i=1;i<=n*2;i++){
        for(int j=1;j<=2*n;j++){
            if(j>n-i+1 && j<n+i && i<=n) {
                cout << " ";
            }
            else if (i>n && j>i-n && j<2*n-i+n+1 ) {
                cout << " ";
            }
            else cout << "*";
        }
        cout << "\n";
    }
}
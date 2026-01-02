#include <iostream>
using namespace std;

int main() {
    int n=5;
    for (int i=0;i<n;i++) {
        for (int j=1;j<n*2;j++){
            if (j<=n-i || j>n+i-1){
                cout <<"*";
            }
            else {
                cout <<" ";
            }
        }
        cout << endl;
    }
}
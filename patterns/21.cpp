//Star Pattern 21

#include <iostream>

using namespace std;

int main() {
    int k=4;
    for (int i=1;i<=k;i++){
        for (int j=1;j<=k*2;j++){
            if (j>k-i &&j<=k*2+1-i) {
                cout << "*";
            }
            else {
                cout <<" ";
            }
        }
        cout << endl;
    }
}
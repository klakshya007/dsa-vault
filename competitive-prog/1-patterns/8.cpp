#include <iostream>

using namespace std;

int main() {
    int n=5;
    for (int i=1;i<n;i++) {
        int k=1;
        for (int j=1;j<n*2;j++){
            if (j>=n-i && j<n+i-1) {
                cout << k << " ";
                j<n-1?k++:k--;
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
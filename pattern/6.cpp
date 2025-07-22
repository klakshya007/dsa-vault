#include <iostream>
using namespace std;

void pattern(int n) {
    for (int i=0; i <n ; i++) {
        for(int j=0; j<n+1;j++) {
            if (j<n-i) {
                cout << " ";
            }
            else {
                cout << "* ";
            }
        }
        cout <<endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern(n);
}
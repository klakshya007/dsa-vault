//Star Pattern 23

#include <iostream>

using namespace std;

int main() {
    int k=6;
    for (int i=1;i<=6;i++) {
        for (int j=1;j<=i;j++) {
            if (j%2!=0) {
                cout << "1";
            }
            else {
                cout << "O";
            }
        }
        cout << endl;
    }
}
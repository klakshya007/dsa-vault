//Star Pattern 20

#include <iostream>

using namespace std;

int main() {
    int k=4;
    for (int i=1;i<=k;i++){
        int n=1;
        char alpha='A';
        for (int j=1;j<=k*2;j++){
            if (j>k-i && j<=k){
                cout << alpha;
                alpha++;
            }
            else if (j>k&&j<=k+i){
                cout << n;
                n++;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
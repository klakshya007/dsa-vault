//Star Pattern 18

#include <iostream>

using namespace std;

int main() {
    int k=5;
    for (int i=1;i<=k;i++){
        for(int j=1;j<=k*2-1;j++){
            if (j>i-1 && j<k*2-i+1){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
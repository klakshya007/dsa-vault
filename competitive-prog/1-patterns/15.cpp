//Star Pattern 15

#include <iostream>
using namespace std;

int main() {
    int k=10;
    int col=(k+1)/2;
    int m=0;
    for (int i=1;i<=k;i++){
        int count=1;
        if (i<=col){
            m++;
        }
        if (i>col+1) {
            m--;
        }
        for (int j=1;j<=col;j++){
            if (j>col-m) {
                cout <<  count <<" ";
                count++;
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
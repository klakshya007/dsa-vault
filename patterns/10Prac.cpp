//Star Pattern 10

#include <iostream>
using namespace std;

int main() {
    int rows=7;
    int n=(rows+1)/2;
    int k=0;
    for (int i=1;i<=rows;i++) {
        if (rows%2==0) {
            if (i<=n) k++;
            if (i>n+1)k--;
        }
        else {
            i<=n?k++:k--;
        }
        for (int j=1;j<=rows;j++){
            if (j>n-k && j<n+k){
                cout <<"* ";
            }
            else {
                cout <<"  ";
            }
        }
        cout << endl;
    }
}
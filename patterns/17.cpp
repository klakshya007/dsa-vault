//Star Problem 17

#include <iostream>
using namespace std;

int main() {
    int k=9;
    int col=(k+1)/2;
    int n=0;
    for (int i=1;i<=k;i++){
        if (i<=col){
            n++;
        }
        else {
            n--;
        }
        for (int j=1;j<=k;j++) {
            if (j>col-n+1 && j<col+n-1){
                cout <<" ";
            }
            else {
                cout << "*";
            }
        }
        cout <<endl;
    }
}
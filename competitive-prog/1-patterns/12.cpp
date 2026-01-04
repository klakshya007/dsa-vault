//Star Pattern Problem 12

#include <iostream>
using namespace std;

int main() {
    int rows=4,k=-1;
    int jptr=rows*2-1;
    for (int i=1;i<=rows;i++){
        k++;
        for (int j=1;j<=jptr;j++){
            if (j>k&&j<jptr+1-k) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout <<endl;
    }
}
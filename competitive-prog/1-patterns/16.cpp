//Star Pattern 16
#include <iostream>
using namespace std;

int main() {
   int m=7;
   int col=(m+1)/2;
   for (int i=1; i<=m; i++){
    for (int j=1;j<=m;j++) {
        if (j==i) {
            cout << "\\";
        }
        else if (j==m-i+1){
            cout << "/";
        }
        else {
            cout << "*";
        }
    }
    cout <<endl;
   }
}
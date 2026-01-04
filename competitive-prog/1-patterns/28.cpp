//Star Pattern 28

#include <iostream>

using namespace std;

int main() {
    int k=5;
    int m=0;
    for (int i=1;i<=k;i++){
        for (int j=1;j<=i*2-1;j++){
            i%2==0?m--:m++;
            if (j%2!=0){
                cout << m;
            }
            else {
                cout << "*";
           }
        }
        cout << endl;
    }
}
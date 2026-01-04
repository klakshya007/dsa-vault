//Star Pattern 22
#include <iostream>
using namespace std;

int main() {
    int k=4;
    for (int i=1;i<=k;i++){
        char n=49;
        for (int j=1;j<=k*2-1;j++){
            if (j>k-i && j<k+i){
                if (j==k+1){
                    n=65;
                } 
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
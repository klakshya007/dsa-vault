//Star Pattern 25

#include <iostream>
using namespace std;

int main(){
    int k=21;
    int change=(k+1)/2;
    char n=48;
    for (int i=1;i<=k;i++){
        for (int j=1;j<=k;j++){
            if (j>=change-i&&j<change+i-1){
                cout << n;
                if (j==change){
                    n=0;
                }
                j<change?n++:n--;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
//Star Pattern 14

#include <iostream>
using namespace std;

int main() {
    int k=6,m=6;
    for (int i=0;i<=k;i++) {
        int n=m;
        for (int j=0;j<=m;j++){
        cout << n <<" ";
        n--;
       }
       m--;
       cout << endl;
    }
}
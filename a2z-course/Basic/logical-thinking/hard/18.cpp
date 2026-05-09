#include <iostream>

using namespace std;

int main() {
    int n=4;
    int a=97+n-1;
    for(int i=1;i<=n;i++){
        int b=a;
        for (int j=1;j<=i;j++){
            cout << (char)b << " ";
            b++;
        }
        cout << "\n";
        a--;
    }
}
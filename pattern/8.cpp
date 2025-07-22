#include <iostream>
using namespace std;

void pattern(int n) {
    for (int i=0;i <n;i++) {
        int k=1;
        for(int j=0;j<2*(n);j++) {
            if (j>(n-1-i) && j<=n+i){
                cout<< k << " ";
                j<=n-1?k++:k--;
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern(n);
}
#include <iostream>

using namespace std;

int main () {
    int n=4;
    for (int i=0;i<n;i++){
        char alpha='A';
        for (int j=1;j<=n*2-1;j++){
            if (j<=n-i|| j>=n+i) {
                cout << alpha;
                j<n?alpha++:alpha--;
            }
            else {
                cout << " ";
                if (j==n){
                    alpha--;
                }
            }
        }
        cout << endl;
    }
}
#include <iostream>

using namespace std;

int main(){
    int n=4;
    for(int i=1;i<=2*n-1;i++){
        for (int j=1;j<=2*n;j++){
            if(i<=n && j>i && j<2*n-i+1)
                cout << " ";
            else if (i>n && j>2*n-i && j<i+1){
                cout <<" ";
            }
            else {
                cout << "*";
            }
        }
        cout << "\n";
    }
}
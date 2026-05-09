#include <iostream>

using namespace std;

int main(){
    int n=4;
    int a=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=2*n;j++ ){
            if (j<=i){
                cout << a;
                a++;
            } 
            else if (j>2*n-i){
                a--;
                cout << a;
            }
            else cout << " ";
        }
        cout << "\n";
        a=1;
        }
    }
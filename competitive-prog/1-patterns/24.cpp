//Star Pattern 24
#include <iostream>
using namespace std;

int main() {
    int k=7;
    for (int i=1;i<=k;i++){
        for (int j=1;j<=k;j++){
            if ((i==1||i==k||j==1||j==k)||(i>=3&&i<=5&&j>=3&&j<=5)&&(i==3||i==5||j==3||j==5)){
                cout << "* ";
            }
            else {
                cout <<  "  ";
            }
        }
        cout <<endl;
    }
}
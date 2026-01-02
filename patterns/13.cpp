//Star Pattern Problem 13

#include <iostream>

using namespace std;

int main(){
    int n=4;
    for (int i=1;i<=n;i++){
        int k=i;
        for (int j=1;j<=n*2-1;j++){
            if (j>n-i && j<n+i){
                cout << k;
                j<=n-1?k++:k--;
            }
            else {
                cout << " ";
            }
        }
        cout<<endl;
    }
}
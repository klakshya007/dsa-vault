#include <iostream>

using namespace std;

int main() {
    int arr[8]={15,5,20,35,2,42,67,17};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=422;
    for (int i=0;i<=n;i++) {
        if(arr[i]==key){
            cout << i <<endl;
            break;
        }
        if (i==n){
            cout << "Element Not Found";
        }
    }
}
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        arr[i]=a;
    }

    //precompute
    int hash[13]={0};
    for (int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    //fetch
    while(true){
        int number;
        cin >> number;
        cout << hash[number];
    }
    return 0;
}
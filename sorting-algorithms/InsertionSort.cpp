#include <iostream>
using namespace std;

void InsertionSort(int a[],int n) {
    int key = a[1];
    for(int i=1;i<n;i++) {
        for(int j=i-1;j>=0;j--) {
            if (a[j]>key) {
                a[j+1] = a[j];
                a[j] = key; 
            }
        }
        key=a[i+1];
    }
}

int main() {
    int n;
    cout << "Enter The Number Of Elements: ";
    cin >>n;
    int a[n];
    for (int i=0; i<n; i++) { 
        cin >> a[i];
    }
    InsertionSort(a,n);
    for (int i=0; i<n ; i++) {
        cout << a[i] << " ";
    }
    
}
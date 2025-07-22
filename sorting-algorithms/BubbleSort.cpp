#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;}

void bsort(int a[],int n) {
    int flag=0;
    for (int i=0;i<n;i++) { //Pass
        for (int j=0;j<n-i-1;j++) {//Comparison
            if (a[j]>a[j+1]) {
                swap(&a[j],&a[j+1]);
                flag=1;
            }
    }
    if (flag==0) {
        break;
    }
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
    bsort(a,n);
    for (int i=0; i<n ; i++) {
        cout << a[i] << " ";
    }
    
}
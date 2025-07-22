#include <iostream>
using namespace std;

//Swap
void Swap(int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b = temp;
}

void SelectionSort(int a[],int n) {
    int flag=0;
    for(int i=0;i<n-1; i++) {
        int min=i;
        for (int j=i+1; j<n;j++){
            if (a[min]>a[j]) {
                Swap(&a[i],&a[j]);
                flag=1;
            }
            if (flag==0) {
                break;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter The Size Of The Array : ";
    cin >>n;
    int a[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    SelectionSort(a,n);
    for (int i=0;i<n;i++) {
        cout << a[i] << " ";}
    return 0;
}
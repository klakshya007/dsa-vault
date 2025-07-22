#include <iostream>
using namespace std;

//Swap
void Swap(int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b = temp;
}

int Partition(int a[], int low, int high) {
    int pivot = low;
    int i = low +1;
    int j=high;
    while (i<=j) {
    while(a[i]<=a[pivot]) {//Left Iterator
        i++;
    }
    while (a[j]>a[pivot]) {//Right Iterator
        j--;
    }
    if (i<j) {
        Swap (&a[i],&a[j]);
    }   
}
Swap(&a[j], &a[pivot]);
pivot=j; //As We Only Change The Elements, Not The Indices Of Pivot & J
return pivot;
}
void QuickSort(int a[], int low, int high) {
    if (low<high) { //Base Case
        int pivot_index =Partition(a,low,high);
        QuickSort(a,low,pivot_index-1); //LeftSubArray
        QuickSort(a,pivot_index+1,high); //RightSubArray
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
    QuickSort(a,0,n-1);
    for (int i=0;i<n;i++) {
        cout << a[i] << " ";}
    return 0;
}
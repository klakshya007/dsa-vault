#include <iostream>
using namespace std;

//Swap
void Swap(int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b = temp;
}

void Merge(int a[],int low,int mid, int high) {
    int i=low;
    int k=0;
    int j=mid+1;
    int temp[high-low+1];
    while (i<=mid && j <=high) {
        if (a[i]<a[j]) {
            temp[k]=a[i];
            i++;
        }
        else {
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    while (i<=mid) {
        temp[k]=a[i];
        i++;k++;
    }
    while (j<=high) {
        temp[k]=a[j];
        j++;k++;
    }
    for(int i=0;i<high-low+1;i++) {
        a[low+i]=temp[i];
    }
}

//Partition
void MergeSort(int a[], int low, int high) {
    if (low<high) {
    int mid = (low+high) /2;
    MergeSort(a,low,mid);//LSA
    MergeSort(a,mid+1,high);//RSA
    Merge(a,low,mid,high);}
}

int main() {
    int n;
    cout << "Enter The Number Of Elements: ";
    cin >>n;
    int a[n];
    for (int i=0; i<n; i++) { 
        cin >> a[i];
    }
    int low=0;
    int high=n-1;
    MergeSort(a,low,high);
    for (int i=0; i<n ; i++) {
        cout << a[i] << " ";
    }
}
#include <iostream>

using namespace std;

void bsort(int a[],int low, int high){
    if(low==high)return;
    int i=low;
    while (i<high){
        if(a[i]>a[i+1]){
            int temp = a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        i++;
    }
    bsort(a,low,--high);
}

int main() {
    int arr[5] = {7,4,1,5,3};
    int low = 0;
    int high = sizeof(arr)/sizeof(int);
    bsort(arr,low,high-1);
    for(int i=0;i<high;i++){
        cout << arr[i] << " ";
    }
}
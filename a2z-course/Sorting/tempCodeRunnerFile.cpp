#include <iostream>

using namespace std;

int part_func(int a[], int low , int high){
    int i=low+1;
    int j=high;
    int pivot = low;
    while(i<=high && a[pivot]>=a[i]){
         //here the (=) is present because in case the values are equal
         // to the pivot needs to be substituted somewhere either here or the otherside
        i++;
    }
    while(j>=low && a[pivot]<a[j]){
        j--;
    }
    if(i<j){
        swap(a[i],a[j]);
    }
    else swap(a[pivot],a[j]);
}

void quickSort(int a[],int low, int high){
    if(low>=high){
        return;
    }
    int partition = part_func(a,low,high);
    quickSort(a,low,partition);
    quickSort(a,partition+1,high);
}

int main () {
    int arr[8]={4,3,2,5,7,9,1,6};
    int length = sizeof(arr)/sizeof(int);
    quickSort(arr,0,length);
    for(int i=0; i<length; i++) {
        cout << arr[i] << "\n";
    }
}
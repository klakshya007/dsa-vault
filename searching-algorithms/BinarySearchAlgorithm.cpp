#include <iostream>
using namespace std;
 
int BinarySearchAlgorithm(int a[], int low, int high,int key) {
    int mid=(low+high)/2;
    if (low<=high) {
        if (key==a[mid]){
            return mid;}
        else if (key<a[mid]){
            return BinarySearchAlgorithm(a,low,mid-1,key);
        }
        else if (key>a[mid]){
            return BinarySearchAlgorithm(a,mid+1,high,key);
        }
    }
    return -1;
}


int main() {
    int key;
    cout << "Enter The Key: ";
    cin >>key;
    int a[10]={5, 9, 17 , 23, 25,45,59,63,71,89};
    int high = (sizeof(a)/sizeof(a[0]))-1;
    int n= BinarySearchAlgorithm(a,0,high,key);
    if (n==-1) {
        cout << "Element Not Present In Array";
    }
    else {
        cout << "Element Is Present At The Index : " <<n;
    }
}
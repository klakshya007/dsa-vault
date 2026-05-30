#include <iostream>
#include <vector>

using namespace std;

void merge(int a[], int low, int mid, int high){
    vector<int> vec;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
    if(a[left]>a[right]){
        vec.push_back(a[right]);
        right++;
    }
    else {
        vec.push_back(a[left]);
        left++;
    }}
    while(left<=mid){
        vec.push_back(a[left]);
        left++;
    }
    while(right<=high){
        vec.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        a[i]=vec[i-low];
    }
}

void divide(int a[], int low, int high){
    if(low>=high){
        return;
    }
    int mid = (high+low)/2;
    divide(a,low,mid);
    divide(a,mid+1,high);
    merge(a,low,mid,high);
}

int main(){
    int arr[9]={3,1,2,4,1,5,2,6,4};
    int length = sizeof(arr)/sizeof(int);

    divide(arr,0,8);
    for(int i=0;i<length;i++){
        cout << arr[i] << " ";
    }
}
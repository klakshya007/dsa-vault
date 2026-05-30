#include <iostream>
using namespace std;

int binarySearch(int arr[],int target,int low, int high){
    if(low>high)return -1;
    int mid=(low+high)/2;
    if(arr[mid]==target)return mid;
    else if(arr[mid]>target)return binarySearch(arr,target,low,mid-1);
    else return binarySearch(arr,target,mid+1,high);
}

int main(){
    int arr[8]={3,4,6,7,9,12,16,17};
    int target =6;
    int index = binarySearch(arr,target,0,7);
    cout << index <<"\n";
}
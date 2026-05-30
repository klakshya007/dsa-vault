#include <iostream>
using namespace std;

int binarySearch(int arr[],int target,int low ,int high){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target)return mid;
        else if(arr[mid]>target)high=mid-1;
        else low=mid+1;
    }
    return -1;
}

int main(){
    int arr[8]={3,4,6,7,9,12,16,17};
    int target =6;
    int index=binarySearch(arr,target,0,7);
    cout <<index<<endl;
}
#include <iostream>
using namespace std;

int lbound(int arr[],int x,int low, int high,int n){
    int lindex=n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            lindex=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return lindex;
}

int main(){
    int arr [10]={1,2,3,6,7,8,9,9,9,11};
    int i =lbound(arr,6,0,9,10);
    cout << i <<"\n"<<"Number : " << arr[i] << " \n";
}
#include <iostream>
using namespace std;

int ubound(int arr[],int x,int low , int high, int n){
    int uindex=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=x){
            low=mid+1;
        }
        else {
            uindex=mid;
            high=mid-1;
        }
    }
    return uindex;
}

int main(){
    int arr [10]={1,2,3,6,7,8,9,9,9,11};
    int i =ubound(arr,6,0,9,10);
    cout << i <<"\n"<<"Number : " << arr[i] << " \n";
}
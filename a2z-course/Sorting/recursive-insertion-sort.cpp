#include <iostream>

using namespace std;

void isort(int a[], int low, int high){
    if(low>high)return;
    int i=low;
    while(i>0 && a[i-1]>a[i]){
        swap(a[i],a[i-1]);
        i--;
    }
    isort(a,low+1,high);
}

int main(){
    int arr[5]={7,4,1,5,3};
    int low = 0;
    int high = sizeof(arr)/sizeof(int);  
    isort(arr,low,high-1);
    for(int i=0;i<high;i++){
        cout << arr[i] << " ";
    }
}
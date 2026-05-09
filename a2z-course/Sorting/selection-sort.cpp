#include <iostream>

using namespace std;

int main(){
    int arr[6]={13,46,24,52,20,9};

    int length = sizeof(arr)/sizeof(int);

    for(int i=0;i<length-1;i++){
        int min_ind= i;
        for(int j=i;j<length;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        //swap
        int temp=arr[min_ind];
        arr[min_ind]=arr[i];
        arr[i]=temp;
    }

    for(int i=0;i<length;i++){
        cout << arr[i] << " ";
    }
}
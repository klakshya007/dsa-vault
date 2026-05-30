#include <iostream>
using namespace std;

int main() {
    int arr[6]={13,24,46,52,20,9};

    int length = sizeof(arr)/sizeof(int);

    for(int i=0;i<length-1;i++){
        int flag = 0;   
        for(int j=1;j<length-i;j++){
            if(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                flag=1;
            }
        }
        if (flag==0) break;
    }
    for (int i=0;i<length;i++){
        cout << arr[i] << " ";
    }
}
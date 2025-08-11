#include <stdio.h>

int lsa(int arr[],int len,int n) {
    for (int i=0; i<len; i++) {
        if (n==arr[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    int arr[]={10,30,40,20,50,60};
    printf("Enter The Element You Would Like To Search : ");
    scanf("%d",&n);
    int len = sizeof(arr)/sizeof(arr[0]);
    int m=lsa(arr,len,n);
    if (m==-1) {
        printf("The Element Is Out Of Bounds");
    }
    else {
        printf("The Index Of The Element Is : %d",m);
    }
}
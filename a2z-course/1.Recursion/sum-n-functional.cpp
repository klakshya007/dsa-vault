#include <iostream>
using namespace std;

int final_fac(int n){
    if(n==1){
        return n;
    }
    return n*final_fac(n-1);
}

int main(){
    cout <<final_fac(5);
}
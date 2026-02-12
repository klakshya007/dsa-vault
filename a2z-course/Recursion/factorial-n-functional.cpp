#include <iostream>
using namespace std;

int final_sum(int n){
    if(n==1){
        return n;
    }
    return n+final_sum(n-1);
}

int main(){
    cout <<final_sum(5);
}
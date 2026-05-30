#include <iostream>
using namespace std;

void output(int i,int n){
    if(n<i)return;
    cout << n << " ";
    output(i,--n); //Pre-Decrement
}

int main(){
    output(1,20);
}
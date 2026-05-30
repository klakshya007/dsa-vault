#include <iostream>
using namespace std;

void output(int i,int n){
    if(i>n)return;
    cout << i << " ";
    output(++i,n); // Pre-Increment
}

int main(){
    output(1,20);
}
#include <iostream>
using namespace std;

void output(int i, int n){
    if(i==n)return;
    cout << "My Name Is Ryzenn\n";
    output(i++,n);
}

int main(){
    output(1,20);
}
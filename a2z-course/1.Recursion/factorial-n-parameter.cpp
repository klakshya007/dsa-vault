#include <iostream>
using namespace std;

void fac(int i, int final){
    if(i==1){
        cout << final;
        return;
    }
    fac(i-1,final*i);
}

int main(){
    fac(5,1);
}
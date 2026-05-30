#include <iostream>

using namespace std;

void out(int n){
    if(n==4)return;
    cout << n << " ";
    n++;
    out(n);
}
int main(){
    out(0); 
}
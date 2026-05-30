#include <iostream>
using namespace std;

void output(int i,int n){
    if(i<1){
        return;
    }
    output(i-1,n);//After This Function Call The Print Is Executed
    cout << i << " ";
}

int main(){
    output(3,3);
}
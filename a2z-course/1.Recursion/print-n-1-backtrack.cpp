#include <iostream>
using namespace std;

void output(int i,int n){
    if(i>n){
        return;
    }
    output(i+1,n);//After This Function Call The Print Is Executed
    cout << i << " ";
}

int main(){
    output(1,3);
}
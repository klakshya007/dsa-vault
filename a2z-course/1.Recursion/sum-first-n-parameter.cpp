#include <iostream>
using namespace std;

void summation(int i,int sum){
    if(i<1){cout<<sum;return;}
    summation(i-1,sum+i);
}

int main(){
    summation(5,0);
}
#include <iostream>
#include <cmath> //Important
using namespace std;

int main(){
    //Amaetur Method
    int n=7789;
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout << count;

    cout << endl;

    //Crazy Method
    int m=7789;
    int fast_count = log10(m)+1;
    cout << fast_count;
}
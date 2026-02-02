#include <iostream>
using namespace std;

int main(){
    int n,m;
    int count_final=0;
    cin >> n;
    while (n--){
        int count=0;
        for (int j=0;j<3;j++){
            cin >> m;
            if (m==1) {
                count++;
            }
        }
        if (count>=2)count_final++;
    }
    cout << count_final;
}
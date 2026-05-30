#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        arr[i]=a;
    }

    //precompute
    map <int , int> mpp;
    for (int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    
    //iterate
    for(auto it:mpp){
        cout << it.first << "->" << it.second << "\n";
    }

    return 0;
}
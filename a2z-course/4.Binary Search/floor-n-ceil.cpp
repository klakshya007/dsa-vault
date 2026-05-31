#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vec={3,4,4,7,8,10};
    int x=8;
    int low = 0;
    int high = vec.size()-1;
    int floor=-1,ceil=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(vec[mid]==x){
            floor=vec[mid];
            ceil=vec[mid];
            break;
        }
        else if (vec[mid]<x){
            floor=vec[mid];
            low=mid+1;
        }
        else {
            high=mid-1;
            ceil=vec[mid];
        }
    }
    cout << floor << " " << ceil;
}
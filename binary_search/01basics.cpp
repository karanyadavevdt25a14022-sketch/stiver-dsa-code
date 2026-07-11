#include <iostream>
using namespace std;

int main(){
    int arr[] = {3,4,6,7,9,12,16,17};
    int n = 8;
    int low = 0 , high = n-1;
    int mid_indx = (n)/2;
    int key = 10;
     
    while(low < high){
        if(arr[mid_indx] == key ){
            cout<<mid_indx;
            break;
        }

        else if(key > arr[mid_indx]){
            low = mid_indx + 1;
            mid_indx = (low+high)/2;
        }
        else {
            high = mid_indx-1;
            mid_indx = (low+high)/2;
        }
    }

    return 0 ;
}
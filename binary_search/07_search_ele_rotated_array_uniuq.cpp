#include <bits/stdc++.h>

//BRute linear search 

// Optimal bS TC = log n
 class Solution {
public:
    int search(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0 , high = n-1 ;

        while(low <= high){
            int mid = (low + high )/2;
            if(arr[mid] == k ){return mid;}
            //left part
            if(arr[low]<=arr[mid]){
                if(arr[low]<=k && arr[mid]>= k){
                    high = mid - 1 ;
                }
                else low = mid + 1 ;
            }
             //right half
            else {
                if(arr[mid]<= k && arr[high]>=k){
                    low = mid + 1;
                }
                else {
                    high = mid - 1; 
                }
            }


        }



        return -1;
    }
};